nasm -f elf32 kernel/kernel.asm -o kernel/kasm.o 
gcc -m32 -c kernel/kernel.c -o kernelc.o
ld -m elf_i386 -T link.ld -o icos/boot/kernel.bin kernel/kasm.o kernelc.o
qemu-system-x86_64 -kernel icos/boot/kernel.bin
grub2-mkrescue -o icos.iso icos/

read a