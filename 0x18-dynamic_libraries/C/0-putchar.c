#include "main.h"

/**
 * main - printing an item with puchar only without standard library
 *
 *Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
