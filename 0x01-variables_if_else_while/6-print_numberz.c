#include <stdio.h>

int main(void)
{
	int x;

	for (x = '0' ; x < '10' ; x++)
	{
		putchar("%d", x);
	}
	putchar('\n');
	return (0);
}
