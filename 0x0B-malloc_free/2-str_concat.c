#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @sr: string
 * Return: i
 */

int _strlen(int *sr)
{
	int i = 0;

	while (sr[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - a function that concatenates two strings.
 * @s1: destination string
 * @s2: source string
 * Return: cat
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	cat = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (cat == NULL)
		return (NULL);

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}

	*cat = s1[i];

	return (cat);
}
