#include <stdio.h>
#include <limits.h>

/**
 * powertwo - returns the value of 2 raised to
 * the highest power that doesn't exceed x
 * @x: integer to not exceed
 * Return: integer
 */
unsigned long int powertwo(unsigned long int x)
{
	unsigned long int k = 1;
	while (k <= x)
	{
		k <<= 1;
	}
	return (k >> 1);
}

/**
 * print_binary - prints binary of decimal number
 * @n: decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j;
	i = powertwo(n);
	if (!i)
	{
		putchar('0');
		return;
	}
	else
	{
		for (; i > 0; i >>= 1)
		{
			if (n & i)
			{
				putchar('1');
			}
			else
			{
				putchar('0');
			}
		}
	}
	putchar('\n');
}

int main(void)
{
	print_binary(ULONG_MAX);
	return 0;
}

