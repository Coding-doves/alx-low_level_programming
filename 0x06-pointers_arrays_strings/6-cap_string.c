#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @c: string to capitalize
 * Return: c
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		while (!(c[i] >= 97 && c[i] <= 122))
		{
			i++;
		}

		if (c[i - 1] == ' ' ||
		c[i - 1] == '\t' ||
		c[i - 1] == '\n' ||
		c[i - 1] == ',' ||
		c[i - 1] == ';' ||
		c[i - 1] == '.' ||
		c[i - 1] == '!' ||
		c[i - 1] == '?' ||
		c[i - 1] == '"' ||
		c[i - 1] == '(' ||
		c[i - 1] == ')' ||
		c[i - 1] == '{' ||
		c[i - 1] == '}' ||
		i == 0)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
