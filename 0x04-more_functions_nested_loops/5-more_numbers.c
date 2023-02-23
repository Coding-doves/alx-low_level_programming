#include "main.h"

/**
 * more_numbers - prints 0 -14, ten times
 * @i: container carrying ten times
 * @j: container carrying 0-14
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i);
			_putchar(j);
		}
		_putchar('\n');
	}	
}