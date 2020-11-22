#include "../includes/screen.h"
#include "../includes/kb.h"
#include "../includes/string.h"
#include "../includes/stddef.h"
#include "../includes/stdio.h"
#include "../includes/stdlib.h"

main()
{
       clearScreen();
       print("Welcome to NIDOS operating system\nPlease enter a command\n");
       while (1)
       {
                print("\nNIDOS> ");
                
                string ch = readStr();
                if (strstr(ch, "out") != NULL) 
                {
    
                }
                else if(strcmp(ch,"clear"))
                {
                        clearScreen();
                }
                
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");        
       }
        
}
