// File: dda.c
// Description:
// Implementation of DDA Algorithm to trace line and collect
// signals for stepmotor
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

#include "dda.h"
#include "stdio.h"
#include "stdlib.h"
#include "virtualscreen.h"
#include "vector.h"

// ===================================================================
// DDA Line Algorithm
// Based on "IA275 - Computação Gráfica I" document
// Authors -> Profa. Wu, Shin-Ting and Prof.José Mario de Martino
// Sponsored by Unicamp
// ===================================================================
void DdaDrawLine(unsigned long x1, unsigned long y1, 
	      unsigned long x2, unsigned long y2) {
	float x;
	float y;
	float length;
	float deltax;
	float deltay;
	float i;
	long dX;
	long dY;

	dX = (x2-x1);
	dY = (y2-y1);

	if( ABS(dX) >= ABS(dY)) {
		length = (float)ABS(dX);
	} else {
		length = (float)ABS(dY);
	}

	deltax = (float) (dX) / (float) length;
	deltay = (float) (dY) / (float) length;
	x = x1 + 0.5 * SIGN(deltax);
	y = y1 + 0.5 * SIGN(deltay);

	for (i = 0; i < length; i++) {
		VsSetPoint( FLOOR(x), FLOOR(y), 'X') ;
		VecAddStep( FLOOR(x), FLOOR(y));
		x += deltax;
		y += deltay;
	}
}

void Dda3DDrawLine(unsigned long x1, unsigned long y1, unsigned long z1,
	      unsigned long x2, unsigned long y2, unsigned long z2) {
	float x;
	float y;
	float z;
	float length;
	float deltax;
	float deltay;
	float deltaz;
	float i;
	long dX;
	long dY;
	long dZ;

	dX = (x2-x1);
	dY = (y2-y1);
	dZ = (z2-z1);

	// -------------------------------------------
	// lenght can be a greater coordinate Delta
	// -------------------------------------------
	if( ABS(dX) >= ABS(dY)) {
		length = (float)ABS(dX);
	} else {
		length = (float)ABS(dY);
	}
	if( ABS(dZ) >= length) {
		length = (float)ABS(dZ);
	} 
	// -------------------------------------------

	deltax = (float) (dX) / (float) length;
	deltay = (float) (dY) / (float) length;
	deltaz = (float) (dZ) / (float) length;
	x = x1 + 0.5 * SIGN(deltax);
	y = y1 + 0.5 * SIGN(deltay);
	z = z1 + 0.5 * SIGN(deltaz);

	for (i = 0; i < length; i++) {
		VsSetPoint( FLOOR(x), FLOOR(y), 'X') ;
		VecAddStep( FLOOR(x), FLOOR(y));
		x += deltax;
		y += deltay;
		z += deltaz;
	}
}