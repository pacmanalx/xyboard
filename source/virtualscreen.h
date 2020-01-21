// File: virtualscreen.h
// Description:
// Header file for virtualscreen functions and variables
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

#ifndef VIRTUALSCREEN_H
#define VIRTUALSCREEN_H

// Defines
#define CLEAR_CHAR 0x20

// Internal variables
int virXSize;
int virYSize;

int virScreen[1920][1280];

void VsInit(int XSize, int YSize);
void VsClear(void);
void VsSetPoint(int x, int y, char val);
char VsGetPoint(int x, int y);
void VsDump();

#endif
