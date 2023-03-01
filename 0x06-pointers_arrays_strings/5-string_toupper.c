#include "main.h"

/**
 * string_toupper -turns string to uppercase
 * @up: variable
 * Return: n
 */

char *string_toupper(char *up)
{
	int i;

	for (i = 0; i <= up; i++)
	{
		if (up[i] >= 97 && up[i] <= 122)
		{
			up[i] = up[i] - 32;
		}
	}

	return (up);
}
