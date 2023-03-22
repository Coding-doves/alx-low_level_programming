#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for  calculation
 * @argc: counter
 * @argv: vec
 * Return: 0
 */

int main(int argc, char argv)
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*operator == "/" || *operator == "%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
