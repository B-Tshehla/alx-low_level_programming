#include "main.h"
/**
 * _strcmp - "Compares two strings"
 *
 * @s1: "Points to the first string"
 * @s2: "Points to the second string"
 *
 * Return: " A integer if after the string has been compared"
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

