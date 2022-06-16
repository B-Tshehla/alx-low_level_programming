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
	int count_src;
	int count_dest;
	int i;

	count_src = 0;
	count_dest = 0;
	i = 0;
	while (src[count_src])
	{
		count_src++;
	}
	while (dest[count_dest])
	{
		count_dest++;
	}
	count_src--;
	while (i <= count_src)
	{
		dest[count_dest++] = src[i++];
	}
	return (dest);
}
