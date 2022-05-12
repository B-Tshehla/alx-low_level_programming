#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all integers given
 * @n: number of arguments
 * @...: rest of arguments
 *
 * Return: sum of rest of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x = 0, sum = 0;

	va_start(list,n);
	if (n != 0)
	{
		while (x < n)
		{
			sum += va_arg(list, unsigned int);
			x++;
		}
	}
	if (n == 0)
	{
		return (0);
	}
	va_end(list);

	return (sum);
}
