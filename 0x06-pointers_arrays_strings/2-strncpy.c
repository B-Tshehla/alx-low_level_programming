#include "main.h"
/**
 * _strncopy - "Copies a string"
 *
 * @dest: "Points to the destination string"
 * @src: "Points to the source string"
 * @n: size of full string
 *
 * Return: "Copied string into dest"
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
