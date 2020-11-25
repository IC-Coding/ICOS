#ifndef SCREEN_H
#define SCREEN_H

#include "../includes/types.h"
#include "sys_core/system.h"
#include "strfunc.h"

int cursorX = 0, cursorY = 0;
const uint8 sw = 80,sh = 25,sd = 2;                                                    //We define the screen width, height, and depth.


void clearLine(uint8 from,uint8 to);


void updateCursor();

void clearScreen();

void scrollUp(uint8 lineNumber);

void newLineCheck();

void printch(char c);

void kprint (string ch);


#endif