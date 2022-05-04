#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - "return a pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter."
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	s = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		while ( x < size)
		{
			s[i] = str[i];
	}
	return (s);
}
