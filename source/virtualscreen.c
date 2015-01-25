// File: virtualscreen.c
// Description:
// Implementation of virtualscreen functions
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


#include "virtualscreen.h"
#include "stdio.h"

void VsInit(int XSize, int YSize) {
	virXSize=XSize;
	virYSize=YSize;
	VsClear();
}

void VsClear(void) {
	int x;
	int y;

	for(y=0; y<virYSize; y++) {
		for(x=0; x<virXSize; x++) {
			VsSetPoint(x,y,CLEAR_CHAR);
		}
	}
}

void VsSetPoint(int x, int y, char val) {
	virScreen[x][y]=val;
}

char VsGetPoint(int x, int y) {
	return(virScreen[x][y]);
}

void VsDump(void) {
	int x;
	int y;

	for(y=0; y<virYSize; y++) {
		for(x=0; x<virXSize; x++) {
			printf("%c",VsGetPoint(x,y));
		}
		printf("\n");
	}
}
