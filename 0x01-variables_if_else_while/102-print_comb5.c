#include <stdio.h>

/**
 * main - Prints combinations of two two-digit numbers like this 00 01
 * Return: Always 0.
 */

int main(void)
{
	int zero;
	int one;

	for (zero = 0; zero <= 98; zero++)
	{
		for (one = zero + 1; one <= 99; one++)
		{
			putchar((zero / 10) + '0');
			putchar((zero % 10) + '0');
			putchar(' ');
			putchar((one / 10) + '0');
			putchar((one % 10) + '0');

			if ((zero == 98) && (one == 99))
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

		putchar('\n');

		return (0);
}
