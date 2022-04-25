#include "main.h"
/**
 * _strstr - "Locates a substring"
 *
 * @haystack: "The string to be searched."
 * @needle: "The substring to be located."
 *
 * Return: "Return a pointer to begin of the located substring or NULL"
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, z = 0;
	int y;

	while (haystack[x] == '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		while (needle[z] == haystack[y])
		{
			if (needle[z] == '\0')
			{
				return (haystack);
			}
			z++;
		}
	}
	return ('\0');
}
