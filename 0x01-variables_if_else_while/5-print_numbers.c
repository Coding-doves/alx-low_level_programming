#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int b_num;

	for (b_num = 0; b_num < 10; b_num++)
		printf("%d", b_num);

	printf("\n");

	return (0);
}
