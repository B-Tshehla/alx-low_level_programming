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
	int len1 = 0;
	int len2 = 0;


	while (s1[len1])
	{
		len1++;
	}

	while (s2[len2])
	{
		len2++;
	}

	if (len1 < len2)
	{
		return (-15);
	}
	else if (len1 > len2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}

