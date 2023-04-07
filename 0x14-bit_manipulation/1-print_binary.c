#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: input
 * Return: binary numbers
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8 - 1));
	unsigned long int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
			start = 1;
		if (start)
		{
			_putchar('0' + ((n & mask) ? 1 : 0));
		}
		mask >>= 1;
	}
}
