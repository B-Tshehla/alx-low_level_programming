#include <stdio.h>
/**
 * main - "Finds and printts the largest prime factor"
 *
 * Return: "Always 0"
 */
int main(void)
{
	long prime = 61285247514;
	long div;

	while(div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (div = 3; div < (prime /2); div += 2)
		{
			if ((prime % div) == 0)
			{
				prime /= div;
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
