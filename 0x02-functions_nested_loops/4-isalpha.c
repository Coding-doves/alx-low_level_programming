#include "main.h"

/**
 * _isalpha - looks for alphabetic characters
 *
 * Return: 1 for alphabetic char or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 6 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
