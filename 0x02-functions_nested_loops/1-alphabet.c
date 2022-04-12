#include "main.h"
/**
 * main- "The function prints the alphabet in lowercase followed by a new line"
 *
 * Return: "Always 0 (Success)"
 */

/**
 * print_alphabet- "Prints the alphabet in lowercase"
 */
void print_alphabet(void)
{
	char let;
	
	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');	
}
