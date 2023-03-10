#include <stdio.h>

/**
 * main - entry point
 * @argc: rep num of things entered into the command line(on the terminal)
 * @argv: an array that holds the string value of the things entered on the
 * command line(in the terminal)
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
