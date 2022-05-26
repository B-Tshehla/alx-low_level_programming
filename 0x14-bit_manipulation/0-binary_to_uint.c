#include "main.h"

/**
 * binary_to_unit - "Converts a binary number to an unsigned int"
 *
 *@b: "Points to a string of 0 and 1 characters"
 *Return: "The converred number or NULL"
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0; 
	unsigned int multiply = 1;
	int len = 0;

	if (b[len] == '\0')
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}

	while (len >= 0)
	{
		len = len -1;
		
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		
		num = num + (b[len] - '0') * multiply;
		multiply = multiply * 2;
		len--;
		
	}

	return (num);
}
