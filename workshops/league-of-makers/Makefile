.PHONY: all hex flash clean

MCU = atmega328p
F_CPU = 16000000UL
PORT = /dev/ttyACM0

all: hex flash

hex:
	avr-gcc -mmcu=$(MCU) -DF_CPU=$(F_CPU) -Os -o main.bin main.c
	avr-objcopy -O ihex -R .eeprom main.bin main.hex

flash:
	avrdude -p m328p -c arduino -P $(PORT) -b 115200 -U flash:w:main.hex:i

clean:
	rm -f main.hex main.bin

