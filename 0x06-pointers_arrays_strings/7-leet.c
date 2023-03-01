#include "main"

/**
 * leet - replace letter with words
 * @r: varaiable
 * Return: r
 */

char *leet(char *r)
{
	int i, j;
	char l1[] = "aAeEoOtTlL";
	char l2[] = "4433007711";

	for (i = 0; i < r[i]; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (r[i] == l1[j])
			{
				r[i] = l2[j];
			}
		}
	}
	return (r);
}
