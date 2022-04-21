#include "main.h"
#include <stddef.h>
/**
 * rev_string - "Reverses a string"
 * @s: "Points to the string to be reversed"
 */
void rev_string(char *s)
{
	char *temp = NULL;
	int len = 0;
	int y;
	
	
	while (s[len] != '\0')
	{
		len++;
	}

	for (len = len ; len <= 0; len--)
	{
		temp[len] = s[len];
		
	}

	for (y = 0; y < len; y++)
	{
		s[y] = temp[y];
	}
}
