#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: rep num of things entered into the command line(on the terminal)
 * @argv: an array that holds the string value of the things entered on the
 * command line(in the terminal)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 1 || argc < 3)
	{
		for (; i < argc; i++)
			mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	return (0);
}
