#include "main.h"
/**
 * _memcpy - " copies memory area"
 *
 * @dest: "Points to the destination array"
 * @src: "Points to the source array"
 * @n: "The size of the array"
 *
 * Return: "The destination array"
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
