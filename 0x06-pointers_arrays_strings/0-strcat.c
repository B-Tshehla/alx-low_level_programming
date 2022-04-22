#include "main.h"
/**
 * _strcat - "Points to a function concatenates two strings."
 *
 * @src: "Points to the source string."
 * @dest: "Point to the destination string."
 *
 * Return: "A pointer pointing to a string"
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int x =  0;

	while (dest[len])
	{
		len++;
	}

	while (src[i] != 0)
	{
		dest[len] = src[i];
		len++;
	}
	
	dest[len] = '\0';
	return (dest);

}
