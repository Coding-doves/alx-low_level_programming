#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to make change
 * for an amount of money. 
 * @argc: rep num of things entered into the command line(on the terminal)
 * @argv: an array that holds the string value of the things entered on the
 * command line(in the terminal)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent, coins = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	while(cent > 0)
	{
		coins++;
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
