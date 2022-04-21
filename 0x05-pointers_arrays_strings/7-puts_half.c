#include "main.h"
/**
 * puts_half - "prints half of a string"
 *
 * @str: "Points to the string to be printed half"
 */
void puts_half(char *str)
{
	int len = 0;
	int x;

	while (str[len] != '\0')
	{
		len++
	}
	
	if (len % 2 == 1)
	{
		x = (len - 1) / 2;
		x = x + 1;
	}
	else 
	{
		x = len / 2;
	}

	while (x < len)
	{
	_putchar(str[x]);
	}

	_putchar('\n');
}
