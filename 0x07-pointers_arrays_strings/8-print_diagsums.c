#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - "Prints the sum of the two diagonals
 *			of a square matrix of integers."
 *
 * @a: "The matrix of intesers"
 * @size: "The size of the matrix"
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x];
		a = a + size;
	}

	a = a - size;

	for (x = 0; x < size; x++)
	{
		sum2 = sum2 + a[x];
		a = a - size;
	}

	printf("%d, %d\n", sum1, sum2);
}
