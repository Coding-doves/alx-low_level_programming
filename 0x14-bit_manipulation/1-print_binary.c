#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: input
 * Return: the converted number, or 0 if it fails
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned long int p = 0;

	for(; mask != 0; mask >>= 1)
	{
		if (mask & n)
		{
			p = 1;
			_putchar('1');
		}
		else if (p)
			_putchar('0');
	}
		if (!p)
			_putchar('0');
}
