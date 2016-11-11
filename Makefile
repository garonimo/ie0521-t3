#Tarea programada 3

all:
	or32-elf-gcc -mnewlib -mboard=orpsocrefdesign -o main.elf programa.c
clean:
	rm *.elf
