// File: context.c
// Description:
// Implemetation file for context functions 
// =========================================================
// By Pacman Pereira ...................... 2015 - 01 - 12
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
//======================================================

#include "context.h"

void setXY(unsigned long X, unsigned long Y) {
	context.x = X;
	context.y = Y;
}

void setToolStatus(unsigned char toolStatus) {
	context.toolStatus = toolStatus;
}

void setLimits(unsigned long maxXaxis, unsigned long maxYaxis) {
	context.maxXaxis = maxXaxis;
	context.maxYaxis = maxYaxis;
}

