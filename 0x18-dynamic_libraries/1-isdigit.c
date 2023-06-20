#include "main.h"
/**
 * _isdigit - returns 0 if digit
 * @c: char to check
 * Return: 1 for digit or 0 for others
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
