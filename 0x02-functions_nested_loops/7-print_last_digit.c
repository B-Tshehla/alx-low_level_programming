#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: "Value of the last digit"
 */
int print_last_digist( int n)
{
	int lDigit = n % 10;

	if (lDigit < 0)
	{
		last_digit *= -1;
	}
		_putchar(lDigit + '0');

		return (last_digit);

}
