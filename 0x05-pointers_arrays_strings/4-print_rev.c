#include "main.h"
/**
 * print_rev - "Prints a string, in reverse, followed by a new line"
 *
 * @s: "Points to a string that will be reverse"
 */
void print_rev(char *s)
{
		int len = 0;
		

		while (s[len] != '\0')
		{
			len++;
		}

		for (len = len - 1; len >= 0; len--)
		{
			_putchar(s[len]);
		}

		_putchar('\n');
}
