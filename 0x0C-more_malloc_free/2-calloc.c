#include <stdlib.h>
/**
 * _calloc - "allocates memory for an array, using malloc"
 * @nmemb: "array length"
 * @size: "size of each element"
 * Return: "pointer"
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	int x;

	for (x = 0; x < n; x++)
	{
		*s++ = b;
	}
	return (ptr);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	_memset(s, 0, nmemb * size);
	
	return (s);
}
