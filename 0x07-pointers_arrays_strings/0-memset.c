#include "main.h"
/**
 * _memset - "fills memory with a constant byte"
 *
 * @s: "The address of memory"
 * @n: "The number of bytes"
 * @b: "The constant to be printed"
 *
 * Return: "A pointer to the memory area of s"
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x > n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
