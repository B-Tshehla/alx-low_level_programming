#include "main.h"
/**
 * _memset - "fills memory with a constant byte"
 *
 * @s: "The address of memory"
 * @n: "The number of bytes"
 * @b: "The constant to be printed"
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
