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
	int y, z  = 0;
	unsigned int count = 0;

	for (y = 0; s[y] >= '\0'; y++)
	{
		while (accept[z] > '\0')
		{
			if (s[y] == accept[z])
			{
				count++;
				break;
			}
			z++;
		}
	}
	return (count);
}
