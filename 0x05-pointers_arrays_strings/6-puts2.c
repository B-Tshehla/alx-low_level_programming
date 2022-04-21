#include "main.h"
/**
 * puts2 - "prints every other character of a string"
 *
 * @str: "string to be created"
 */
void puts2(char *str)
{
	int x;
	int len = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
