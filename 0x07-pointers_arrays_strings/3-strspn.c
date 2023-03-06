#include "main.h"

/**
 * _strspn - is a function that gets the length of a prefix substring
 * @s: destination
 * @accept: source
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length = 0;
	bool seen;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool seen = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
			seen = true;
			break;
			}
			if (!seen)
				break;
			length++;

		}
	}
	return (length);
}
