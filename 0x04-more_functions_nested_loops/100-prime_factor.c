#include <stdio.h>
#include <math.h>

/**
 * main - fid and print the highest prime number
 *
 * Return: 0
 */

int main(void)
{
	long i, maxf, num = 612852475143;

	for (i = 1; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			maxf = num / i;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
