// File: dda.c
// Description:
// Header file for support to DDA implementation 
// =========================================================
// By Pacman Pereira ...................... 2015 - 01 - 08
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

#ifndef DDA_H
#define DDA_H

// ===================================================================
// Routines for calculations
// ===================================================================
#define SIGN(x) ((x) < 0 ? (-1): (1))
#define ABS(x)	((x) < 0 ? (x*-1) : (x))
#define FLOOR(x) ((x) < 0 ? ((x)-(unsigned long)(x)!= 0?((unsigned long)(x)-1):((unsigned long)(x))):(unsigned long)(x))

// ===================================================================
// DDA Line Algorithm
// Based on "IA275 - Computação Gráfica I" document
// Authors -> Profa. Wu, Shin-Ting and Prof.José Mario de Martino
// Unicamp
// ===================================================================
void DdaDrawLine(unsigned long x1, unsigned long y1, 
	      unsigned long x2, unsigned long y2);

void Dda3DDrawLine(unsigned long x1, unsigned long y1, unsigned long z1,
	      unsigned long x2, unsigned long y2, unsigned long z2);

#endif
