#include "main.h"

/**
 * print_diagsums -  prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a:matrix to be summed
 * @size:size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i, firstSum = 0, secondSum = 0;

	for (i = 0; i < size; i++)
	{
		firstSum += a[i];
		secondSum += a[size - 1 - i]
		a += size;
	}

	printf("%d, %d\n", sum1, sum2);
}
