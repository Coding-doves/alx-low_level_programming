#include "main"

/**
 * leet - replace letter with words
 * @n: input value
 * Return: n
 */

char *leet(char *n)
{
	int i, j;
	char *e1
	e1 = "aAeEoOtTlL4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == e1[j])
			{
				n[i] = e1[j + 10];
			}
		}
	}
	return (n);
}
