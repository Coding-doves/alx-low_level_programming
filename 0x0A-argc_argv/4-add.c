#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: rep num of things entered into the command line(on the terminal)
 * @argv: an array that holds the string value of the things entered on the
 * command line(in the terminal)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
