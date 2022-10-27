CC = arm-none-eabi-gcc

MACH =cortex-m3

CFLAGS = -c -mcpu=$(MACH) -mthumb

LDFLAGS = -nostdlib -T stm32f10_linker_script.ld -Wl,-Map=final.map
main.o : main.c
	$(CC) $(CFLAGS) $^ -o $@
	
	
GPIO_program.o:GPIO_program.c
	$(CC) $(CFLAGS) $^ -o $@

STM32f10_startup.o : stm32f10_startup.c
	$(CC) $(CFLAGS) $^ -o $@

CLK_program.o:CLK_program.c
	$(CC) $(CFLAGS) $^ -o $@
final.elf: GPIO_program.o main.o STM32f10_startup.o CLK_program.o
	$(CC) $(LDFLAGS) $^ -o $@
clean:
	rm -rf *.o *.elf *.s *.map
	
all: GPIO_program.o main.o STM32f10_startup.o CLK_program.o final.elf		

load:
	openocd -f interface/stlink-v2.cfg -f board/stm32f103c8_blue_pill.cfg


