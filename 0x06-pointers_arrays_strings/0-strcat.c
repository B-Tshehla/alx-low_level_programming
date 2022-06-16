#include "main.h"
/**
 * _strcat - "Points to a function concatenates two strings."
 *
 * @src: "Points to the source string."
 * @dest: "Point to the destination string."
 *
 * Return: "A pointer pointing to a string"
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
