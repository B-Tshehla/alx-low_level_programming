#include "main.h"
/**
 *_strlen - Return the legnth of a string
 *
 *@s:"Points to a character"
 *Return: "The legnth of the string"
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
