// File: context.h
// Description:
// Header file for context of program  
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
//=======================================================

#ifndef CONTEXT_H
#define CONTEXT_H

struct context_st {
        unsigned long x;
        unsigned long y;
	unsigned long maxXaxis;
	unsigned long maxYaxis;
	unsigned char toolStatus;
};


struct context_st context;

void setXY(unsigned long X, unsigned long Y);
void setToolStatus(unsigned char toolStatus);
void setLimits(unsigned long maxXaxis, unsigned long maxYaxis);

#endif
