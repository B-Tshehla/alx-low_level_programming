#include "main.h"
/**
 * _sqrt_recursion - "Get the natural square root of a number."
 *
 * @n: "an interger"
 *
 * Return: "Return an integer"
 */
int getSquare(int n)
{
	int x = 1;

	if (x * x == n)
	{
		return (x);
	}
	if (x * x < n)
	{
		return (x + 1);
	}
	else
	{
		return (-1);
	}
}
