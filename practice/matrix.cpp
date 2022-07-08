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
	int max_of_min = mins[0];
	for (int i = 0; i < 5; i++)
	{
		if (mins[i] > max_of_min)
			max_of_min = mins[i];
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
	int min_of_max = maxes[0];
	for (int i = 0; i < 5; i++)
	{
		if (maxes[i] < min_of_max)
			min_of_max = maxes[i];
	}

}