#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string to be compared
 * @needle: substring
 * Return: a pointer to the beginning of the located substring, or NULL if
 *  the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
		 	one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return ('\0');
}
