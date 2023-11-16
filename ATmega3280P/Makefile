#Example makefile
default:
#Compile to Obj {-Os (Optimize for space)}
	avr-gcc -Os -DF_CPU=cpu_target -mmcu=mmcu_target -c -o file_out.o file_in.c

#Link obj to binary
	avr-gcc -o file_out.bin file_in.o

#Convert binary to hex flashable format
	avr-objcopy -O .hex -R .eeprom file_in.bin file_out.hex

#Flash hex into chip (CARE, RISK OF BRICKING CHIP, recheck steps and architecture)
	sudo avrdude -F -V -c arduino -p chip_model -P COM_port -b baud_rate -U flash:w:file_to_flash.hex