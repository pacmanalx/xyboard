// File: vector.c
// Description:
// Implemetation file for vector & step motor cursor 
// functions and variables
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

#include "vector.h"
#include "stdio.h"

void VecAddStep(unsigned long x, unsigned long y) {
	unsigned char directionX;
	unsigned char directionY;
	unsigned char cursorDirection;

	// Determine vector direction
	directionX=VecDirection(vecLastX,x);
	directionY=VecDirection(vecLastY,y);

	// Determine cursor direction
	if (directionX==NODIR    && directionY==POSITIVE) cursorDirection=DIR_UP;
	if (directionX==POSITIVE && directionY==POSITIVE) cursorDirection=DIR_UP_RIGHT;
	if (directionX==POSITIVE && directionY==NODIR)    cursorDirection=DIR_RIGHT;
	if (directionX==POSITIVE && directionY==NEGATIVE) cursorDirection=DIR_DOWN_RIGHT;
	if (directionX==NODIR    && directionY==NEGATIVE) cursorDirection=DIR_DOWN;
	if (directionX==NEGATIVE && directionY==NEGATIVE) cursorDirection=DIR_DOWN_LEFT;
	if (directionX==NEGATIVE && directionY==NODIR)    cursorDirection=DIR_LEFT;
	if (directionX==NEGATIVE && directionY==POSITIVE) cursorDirection=DIR_UP_LEFT;

	// Decision to contract cursor direction in Step Collection
	if(lastStep.direction!=cursorDirection) {
		stepCol[stepCount].direction=cursorDirection;
		stepCol[stepCount].step=1;
		lastStep=stepCol[stepCount];
		stepCount++;
	} else {
		stepCol[stepCount-1].step++;
		lastStep=stepCol[stepCount-1];
	}
	
	// Atualize the last X and Y for discover the next
	// vector direction in next iteration
	vecLastX=x;
	vecLastY=y;
}

unsigned char VecDirection(unsigned long operandA, unsigned long operandB) {
	return(operandA==operandB?NODIR:(operandA<operandB?POSITIVE:NEGATIVE));
}

void VecDump(void) {
	unsigned long i;

	for(i=0; i<stepCount; i++) {
		printf("Cursor ID [%lu] = %lu steps .... ", i, stepCol[i].step);
		if(stepCol[i].direction==DIR_UP)         printf("ACIMA");
		if(stepCol[i].direction==DIR_UP_RIGHT)   printf("ACIMA+DIREITA");
		if(stepCol[i].direction==DIR_RIGHT)      printf("DIREITA");
		if(stepCol[i].direction==DIR_DOWN_RIGHT) printf("ABAIXO+DIREITA");
		if(stepCol[i].direction==DIR_DOWN)       printf("ABAIXO");
                if(stepCol[i].direction==DIR_DOWN_LEFT)  printf("ABAIXO+ESQUERDA");
                if(stepCol[i].direction==DIR_LEFT)       printf("ESQUEDA");
                if(stepCol[i].direction==DIR_UP_LEFT)    printf("ACIMA+ESQUERDA");
		printf("\n");
	}
}
