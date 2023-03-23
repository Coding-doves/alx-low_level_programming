#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for  calculation
 * @b: argument counter; provide number of argument
 * @a: array/argument
 * Return: 0
 */

int main(int a, char *b[])
{
	int num1, num2;
	int (*calc)(int, int);

	if (a != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (b[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(b[1]);
	num2 = atoi(b[3]);
	if ((*b[2] == '/' || *b[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(b[2]);

	printf("%d\n", calc(num1, num2));

	return (0);
}
