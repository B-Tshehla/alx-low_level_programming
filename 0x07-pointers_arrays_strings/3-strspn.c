#include "main.h"
/**
 * _strspn - "Gets the legnth of the prefix substring"
 *
 * @s: " string to get prefix from."
 * @accept:  " accepted characters"
 *
 * Return: " The number of bytes in the initial segment"
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y = 0, z;
	unsigned int count = 0;

	while (accept[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		z = 0;
		while (s[z] != '\0')
		{
			if (s[z] == accept[y])
			{
				count++;
			}
			z++;
		}
	}
	return (count);
}
