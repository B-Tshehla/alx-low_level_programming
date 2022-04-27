#include "main.h"
/**
 * _strchr - "Locates a character in a string"
 *
 * @s: "Points to a strings to be searched"
 * @c: "character to be searched"
 *
 * Return: "The first occurance of the character"
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
