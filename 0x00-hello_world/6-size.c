#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ 
	int x;
	long int y;
	long long int z;
	char a;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %ld byte(s)\n"), (unsigned long)sizeof(f));
	return (0);
}
