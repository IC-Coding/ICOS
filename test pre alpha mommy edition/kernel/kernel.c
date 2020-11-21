#include "../includes/screen.h"

/*

DECLARATIONS OF INDEPENDENCE

*/

void updatePrint();

/*

END OF DECLARATIONS OF INDEPENDENCE

*/



string screenLines[19];


void updatePrint()
{
    for (int i = 0; i < sizeof(screenLines)/sizeof(string); i++)
    {
        if (screenLines[i] != "S")
        {
            print(screenLines[i]);
        }
        else 
        {
            screenLines[i] = "";
        }
    }
}


void clearScr();

int main(void)
{
    screenLines[1] = "ICOS Booted and ready to go >>>";
    screenLines[2] = "Fuck off";

    updatePrint();
    return 0;
}

void clearScr(void) 
{
    clearScreen();
}

