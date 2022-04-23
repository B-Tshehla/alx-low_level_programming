#include "main.h"
/**
 * reverse_array - "Reverses the content of an array of integers."
 *
 * @a: " Points to an array of integers"
 * @n: "The number of elements of an array"
 */
void reverse_array(int *a, int n)
{
	int x;
	int *num;
	int y = 0;
	int temp;

	num = a;

	for (x = 1; x < n; x++)
	{
		num++;
	}

	for (y = 0; y < x / 2; x++)
	{
		
		temp = a[y];
		a[k] = *num;
		*num = temp;
		temp--;
	}
}


