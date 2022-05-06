#include <stdlib.h>

/**
 * array_range _ "create an array of integers"
 * @min: "size of the array"
 * @max: "char to initialize"
 * Return: "pointer to the array initialized or NULL"
 */

int *array_range(int min, int max)
{
	int *s;
	int x;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc((max - min + 1) * sizeof(int));

	if (s == 0)
	{
		return (NULL);
	}
	
	for (x = 0; min + x <= max; x++)
	{
		s[x] = min + i;
	}

	return (s);
}
