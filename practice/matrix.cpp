#include "matrix.h"
#include <stdio.h>

void min_matrix(int **a) {
	int mins[5];
	for (int i = 0; i < 5; i++)
	{
		int min = a[i][0];
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		mins[i] = min;

	}


}


void max_matrix(int **a) {
	int maxes[5];
	for (int i = 0; i < 5; i++)
	{
		int max = a[i][0];
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
		maxes[i] = max;

	}

}