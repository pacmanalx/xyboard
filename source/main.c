// File: main.c
// Description:
// This is main file for copilation and entry point of test
// =========================================================
// By Pacman Pereira ...................... 2015 - 01 - 07
// =========================================================
//           
//                        O O O
//                      O       O
//                    O           O
//                  O               O
//                O                   O
//                O                   O
//               O  O               O  O
//               O    O           O    O
//               O      O       O      O
//               O        O O O        O
//               O          O          O
//                 O        O        O
//                   O      O      O
//                     O    O    O
//                       O  O  O
//   _____                 OOO  ____
//  |             ___     ___  |    |       ___  _     _
//  |      |   | |   | | |     |    | |    |   |  |   |
//  |      |   | |===  | |     |====  |    |   |   |_| 
//  |      |   | |   | | |     |    | |    |   |   | |
//  |      |   | |   | | |     |    | |    |   |  |   |
//   ^^^^^  ^^^   ^^^     ^^^   ^^^^   ^^^  ^^^  ^     ^
//=======================================================

#include "stdio.h"
#include "stdlib.h"
#include "virtualscreen.h"
#include "vector.h"
#include "dda.h"
#include "context.h"

// ===================================================================
// Configure output Debug
// ===================================================================
#define DUMP_VIRTUAL_SCREEN 1
#define DUMP_CURSOR         1

// ===================================================================
// Entry point of program
// ===================================================================
void main(void) {
	unsigned long i;

	// Initialize virtual screen
	VsInit(100,100);

	// Variable defined in vector.h, denotes the step point in stepCol collection
	stepCount=1;

	// Reset last vectors for cumulative calculations on vector.h
	vecLastX=0;
	vecLastY=0;

	// Draw the lines on virtual screen
	DdaDrawLine(25,25,49,49);
	DdaDrawLine(10,40,90,10);

	// Dump the virtual screen or/and calculated vectors
	// See DUMP_VIRTUAL_SCREEN and DUMP_CURSOR on define section above in this file
	if(DUMP_VIRTUAL_SCREEN) VsDump();
	if(DUMP_CURSOR)         VecDump();
}
