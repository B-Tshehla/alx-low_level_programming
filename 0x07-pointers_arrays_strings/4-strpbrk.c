#include "main.h"
/**
 * _strpbrk - "Searches a string for any of a set of bytes."
 *
 * @s: "The string to be searched."
 * @accept: "The set of bytes to be searched"
 *
 * Return: " Return a pointer to thye matched byte."
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, z = 0;
	int y;

	while (accept[x] != '\0')
	{
		x++;
	}

	while (s[z] != '\0')
	{
		for (y = 0; y < x; y++)
		{
			if (s[z]  == accept[y])
			{
				return (s);
			}
		}
		z++;
	}
	return ('\0');
}
