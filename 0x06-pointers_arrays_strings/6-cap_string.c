#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @c: variable
 * Return:
 */

char *cap_string(char *c)
{
	int i;

	i = 0;
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
		c[i - 1] == '}')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
