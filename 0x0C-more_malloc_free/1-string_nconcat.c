#include "main.h"
#include <stdlib>
/**
 * string_nconcat - "concatenates two strings"
 * @s1: "first string"
 * @s2: "second string"
 * @n: "first bytes of string 2 to be used"
 * Return:"pointer or NULL"
 */

unsigned int _strlen (char *s)
{
	unsigned int x = 0;

	while (s[size] != '\0')
	{
		x++;
	}
	return (x);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2  "";
	}
	
	if (n < _strlen(s2))
	{
		s = malloc(_strlen(s1) + n * sizeof(char) + 1);
	}
	else
	{
		s = malloc(_strlen(s1) + _strlen(s2) + 2);
	}
	
	if (s == 0)
	{
		return (NULL);
	}

	while (s1[x] != '\0')
	{
		s[x] = s1[x];
		x++
	}

	while (s2[y] != '\0' && j < n)
	{
		s[x] = s2[y];
		y++;
		x++
	}
	s[x] = '\0';

	return (s);
}
