#include <stdio.h>

/**
 * main - Prints combinations of two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int zero;
	int one;

	for (zero = 0; zero <= 8 ; zero++)
	{
		for (one = 1; one <= 9; one++)
		{
			putchar((zero % 10) + '0');
			putchar((one % 10) + '0');

			if ((zero == 8) && (one == 9))
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
