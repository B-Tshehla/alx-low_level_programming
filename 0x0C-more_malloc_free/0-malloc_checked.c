#include <stdlib.h>
/**
 * malloc_checked - "allocates memory using malloc and exit if failed"
 * @b: "integer for space"
 * Return: "Pointer to the array initialized or NULL"
 */
void *malloc_checked(unsigned int b)
{
	int *malloc_int;

	malloc_int = malloc(b);
	if (malloc_int == NULL)
		exit(98);
	return (malloc_int);
}
