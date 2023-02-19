#include <stdio.h>

/**
 * main - Prints combinations of three digits
 *
 * Return: Always 0.
*/

int main(void)
{
	int zero;
	int one;
	int two;

	for (zero = 0; zero <= 7 ; zero++)
	{
		for (one = zero + 1; one <= 8; one++)
		{
			for (two = one + 1; two <= 9; two++)
			{
				putchar((zero % 10) + '0');
				putchar((one % 10) + '0');
				putchar((two % 10) + '0');

				if ((zero == 7) && (one == 8) && (two == 9))
				{
				continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
