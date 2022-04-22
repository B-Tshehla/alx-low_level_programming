#include "main.h"
/**
 * _strncopy - "Copies a string"
 *
 * @dest: "Points to the destination string"
 * @src: "Points to the source string"
 *
 * Return: "Copied string into dest"
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;
	int y;

	while (src[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y])
	{
		dest[y] = src[y];
		y++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
