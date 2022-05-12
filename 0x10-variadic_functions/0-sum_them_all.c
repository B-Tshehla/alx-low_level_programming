#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  "sum all arguments"
 * @n: "int, number of undefined arguments"
 *
 * Return: "sum of args"
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0, sum = 0;

	va_start(list, n);
	if (n != 0)
	{
		while (i < n)
		{
			sum = sum + va_arg(list, unsigned int);
			i++;
		}
		va_end(list);
	}

	return (sum);
}
