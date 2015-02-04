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
#include "string.h"
#include "virtualscreen.h"
#include "vector.h"
#include "dda.h"
#include "context.h"

// ===================================================================
// Configure output Debug
// ===================================================================
#define DUMP_VIRTUAL_SCREEN 0
#define DUMP_CURSOR         0

// ===================================================================
// Variables for filename and parameter list
// ===================================================================
char filename[160];

// ===================================================================
// Entry point of program
// ===================================================================
int main(int argc, char *argv[]) {
	unsigned long i;

	printf("%d\r\n",argc); 

	if(argc==1) {
		printf("Idiot code: pass the parameter corretly!i\r\n");
		return(1);
	}

	sprintf(filename,"%s",argv[1]);
	printf("%s\n\r", filename);

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
