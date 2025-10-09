#include "library.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

	/* TP5 exercice 6 */

void create_line(int size, int red, int green, int blue) {
	for( int i = 0; i < size ; i ++ ) {
		create_square(red, green , blue);
	}
}


	/* TP5 exercice 7 */

// void graphic() {
// 	for (int i = 0;i<5;i++) {
// 		create_square(255, 0, 0);
// 		for (int j = 0;j<4;j++) {
// 			if (i>=1 && i<=3 && j>=0 && j<=2) {
// 				create_square(0, 255, 0);
// 			} else {
// 				create_square(255, 0, 0);
// 			}
// 		}
// 		new_line();
// 	}
// }


int main() {

	/* TP5 exercice 4 */

	// for (int i = 0; i < 5; i++){
	// 	create_square(0, 0, 255);
	// }


	/* TP5 exercice 5 */

	// for (int i = 0; i < 5; i++){
	// 	for (int j = 0; j < 5; j++){
	// 		create_square(0, 255, 0);
	// 	}
	// 	new_line();
	// }

	/* TP5 exercice 8 */

	// srand(time(NULL));
	// for (int i = 0; i < 5; i++){
	// 	int R = rand() % 256;
	// 	int G = rand() % 256;
	// 	int B = rand() % 256;
	// 	create_square(R,G,B);
	// 	for (int j = 0; j < 4; j++){
	// 		R = rand() % 256;
	// 		G = rand() % 256;
	// 		B = rand() % 256;
	// 		create_square(R,G,B);
	// 	}
	// 	new_line();
	// }

	/* TP5 exercice 9 */

	// for (int i = 0; i < 5; i++){
	// 	if (i % 2 != 0){
	// 		create_line(5,0,255,0);
	// 	} else if (i % 2 == 0){
	// 		create_line(5,255,0,0);
	// 	}
	// 	new_line();
	// }


	/* TP5 exercice 10 */

	// for (int i = 0; i < 5; i++){
	// 	if(i % 2 != 0){
	// 		create_line(5,255,255,0);
	// 	}
	// 	for (int j = 0; j < 5; j++){
	// 		if (j % 2 != 0 && i % 2 != 1){
	// 			create_square(0,0,255);
	// 		} else{
	// 			create_empty_square();
	// 		}
	// 	}
	// 	new_line();
	// }


	/* TP5 exercice 11 */

	// for (int i = 0; i < 5; i++){
	// 	int compt = 0;
	// 	for (int j = 0; j < 5; j++){
	// 		while (compt != i){
	// 			create_square(255,255,0);
	// 			compt += 1;
	// 		}
	// 	}
	// 	new_line();
	// }


	/* TP5 exercice 12 */

	// int height = 5;
	// int result = 1;
	// int width = 4;
	// for (int i = 0; i < height; i++){
	// 	for (int j = 0; j < width; j++){
	// 		create_empty_square();
	// 	}
	// 	for (int k = 0; k < result; k++){
	// 		create_square(255,255,0);
	// 	}
	// 	for (int l = 0; l < width; l++){
	// 		create_empty_square();
	// 	}
	// 	width -= 1;
	// 	result += 2;
	// 	new_line();
	// }


	/* TP5 exercice 13 */

	// int height = 5;
	// int result = 1;
	// int width = 4;
	// for (int i = 0; i < height; i++){
	// 	for (int j = 0; j < width; j++){
	// 		create_empty_square();
	// 	}
	// 	for (int k = 0; k < result; k++){
	// 		if (k % 2 == 0){
	// 			create_square(0,255,0);
	// 		} else{
	// 			create_square(255,0,0);
	// 		}
	// 	}
	// 	for (int l = 0; l < width; l++){
	// 		create_empty_square();
	// 	}
	// 	width -= 1;
	// 	result += 2;
	// 	new_line();
	// }
	// for (int m = 0; m < height + 6; m++ ){
	// 	for (int n = 0; n < 9;n++){
	// 		if (m < height){
	// 			if (n == 3){
	// 				create_line(3,170,47,47);
	// 			} else {
	// 				create_empty_square();
	// 			}
				
	// 		}
			
	// 	}
	// 	new_line();
	// }


	draw();
    return 0;
}
