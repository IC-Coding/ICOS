#include "../includes/strings/screen.h"
#include "../includes/strings/strfunc.h"
#include "../includes/sys_core/kb.h"


//ENTRY POINT TO OS > REFERENCED BY ASM FILE kernel.asm ('extern main') 


int main()
{
    /* code */
    clearScreen();

    kprint("boot_ok");

    return 0;
}
