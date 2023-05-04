#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: input
 * Return: the converted number, or 0 if it fails
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
}
