#include <stdlib.h>

/**
 * _strlen - "find length of a string"
 * @s: "string"
 * Return: "integer"
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, x;
	char *s;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	s = malloc((len1 + len2) * sizeof(char) + 1);

	if (s == 0)
	{
		return (0);
	}

	for (x = 0; x <= len1 + len2; x++)
	{
		if (x < len1)
		{
			s[x] = s1[x];
		}
		else
		{
			s[x] = s2[x - len1];
		}
	}
	s[x] = '\0';
	return (s);
}
