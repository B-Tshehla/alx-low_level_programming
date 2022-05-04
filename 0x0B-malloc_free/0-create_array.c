#include <stdlib.h>
/**
 *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);
	unsigned int x;

	if (size == 0 || s == 0)
	{
		return (0);
	}

	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}

	return (s);
}
