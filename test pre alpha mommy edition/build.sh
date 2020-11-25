#COMPILE KERNEL.ASM ASSEMBLER FILE
nasm -f elf32 kernel/kernel.asm -o kernel/bin/kasm.o 

#COMPILE KERNEL C FILE
gcc -m32 -c kernel/kernel.c -o kernel/bin/kernelc.o

#LINK THE OUTPUT OF ASM AND C AND COMPILE INTO BIN FILE
ld -m elf_i386 -T link.ld -o icos/boot/kernel.bin kernel/bin/kasm.o kernel/bin/kernelc.o

#LAUNCH QEMU FROM KERNEL.BIN
qemu-system-i386 -kernel icos/boot/kernel.bin

#COMPILE ISO
grub2-mkrescue -o icos.iso icos/


read a