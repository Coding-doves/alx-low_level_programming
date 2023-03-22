#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: pointer
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	if (name)
	{
		for (i = 0; name[i]; i++)
		{
			f(&name[i]);
		}
	_putchar('\n');
	}
}
