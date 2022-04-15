#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = 0;

	if (b > largest || b < 0)
	{
		largest = b;

		if (c > largest)
		{
			largest = c;

			if (a > largest)
			{
				largest = a;
			}
		}
	}
	return (largest);
}
