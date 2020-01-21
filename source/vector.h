// File: vector.h
// Description:
// Header file for vector & step motor cursor 
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

#ifndef VECTOR_H
#define VECTOR_H

// The number of maximum steps on array
#define MAX_STEPS 	32000

// Used for identify vector direction
#define NODIR		0
#define POSITIVE 	1
#define NEGATIVE 	2

// User for determine cursor direction based on actual vector direction
// and last vector direction
#define DIR_UP		0
#define DIR_UP_RIGHT	1
#define DIR_RIGHT	2
#define DIR_DOWN_RIGHT	3
#define DIR_DOWN	4
#define DIR_DOWN_LEFT	5
#define DIR_LEFT	6
#define DIR_UP_LEFT	7

unsigned long vecLastX;
unsigned long vecLastY;

struct step {
        unsigned long step;
        unsigned char direction;
};

struct step stepCol[MAX_STEPS];
struct step lastStep;
unsigned long stepCount;

void VecAddStep(unsigned long x, unsigned long y);
unsigned char VecDirection(unsigned long operandA, unsigned long operandB);
void VecDump(void);

#endif
