#include "main.h"
/**
 * swap_int - "Swaps the values of two integers"
 *
 * @a : "Points to an int"
 * @b : "Points to an int"
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
