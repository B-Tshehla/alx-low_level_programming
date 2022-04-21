#include "main.h"
/**
 *  _puts - "Prints a string to stdout."
 *
 *  @str: "Points to the string to be printed"
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
