#include <stdio.h>
#include "matrix.h"

/**
* @file practice.cpp
* @author Зінченко М.Д., гр. 515Б
* @date 08.07.2022
* @brief Практична робота 
*
* Виконання дій над елементами матриць 
*/
int main() {
	int *pa[5];
	int a[5][5];
	printf("Input number of matrix: ");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			scanf_s("%d", &a[i][j]);
	}
	for (int i = 0; i < 5; i++)
		pa[i] = (int*)&a[i];
	
	printf("Your matrix: ");
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	min_matrix(pa);
	printf("\n");
	max_matrix(pa);
	return 0;
}