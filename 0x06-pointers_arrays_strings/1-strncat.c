#include "main.h"
/**
 * _strncat - " function pointer that concatinate two strings"
 *
 * @n: "integer that determine the number of characters to be printed"
 * @dest: "Points to a destination string"
 * @src: "Points to the source string"
 *
 * Return: " A string that that concatinate two strings in dest"
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int x = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (x < n && src[x] != '\0')
	{
		dest[len] =src[x];
		len++;
		x++;
	}
	dest[len + n + 1] ='\0';

	return (dest);
}
