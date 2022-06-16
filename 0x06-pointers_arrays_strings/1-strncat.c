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
	int count_dest;
	int i;

	count_dest = 0;
	i = 0;
	while (dest[count_dest])
	{
		count_dest++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[count_dest++] = src[i++];
	}
	return (dest);
}
