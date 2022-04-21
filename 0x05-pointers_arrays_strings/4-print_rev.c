#include "main.h"
/**
 * print_rev - "Prints a string, in reverse, followed by a new line"
 *
 * @s: "Points to a string that will be reverse"
 */
void print_rev(char *s)
{
		int len = 0;
		int x;

		while (*s++)
		{
			len++;
		}

		for (x = len - 1; x >= 0; x--)
		{
			_putchar(s[x]);
		}

		_putchar('\n');
}
