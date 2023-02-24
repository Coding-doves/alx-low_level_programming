#include <stdio.h>

/**
 * main - using the mulitpies of 3 and 5 print fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;
	char f[] = "fizz";
	char b[] = "buzz";
	char fb[] = "fizzbuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" %s", fb);
		else if (i % 3 == 0)
			printf(" %s", f);
		else if (i % 5 == 0)
			printf(" %s", b);
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
