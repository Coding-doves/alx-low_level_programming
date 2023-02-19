#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int b_num;
	char b_alphabet;

	for (b_num = 0; b_num < 10; b_num++)
		putchar((b_num % 10) + '0');

	for (b_alphabet = 'a'; b_alphabet <= 'f'; b_alphabet++)
		putchar(b_alphabet);

	putchar('\n');

	return (0);
}
