#include "main.h"
#include <stdio.h>

/**
 * main -  print fizzbuzz using the mulitpies of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", fb);
		}
		else if (i % 3 == 0)
		{
			printf("%s", f);
		}
		else if (i % 5 == 0)
		{
			printf("%s", b);
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
