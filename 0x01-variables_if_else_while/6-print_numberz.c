#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int b_num;

	for (b_num = 0; b_num < 10; b_num++)
		putchar((b_num % 10) + '0');

	putchar('\n');

	return (0);
}
