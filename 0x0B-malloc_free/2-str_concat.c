#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @sr: string
 * Return: i
 */

int _strlen(char *sr)
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
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	cat = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (cat == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		cat[i + j] = s2[j];
		j++;
	}

	cat[i + j] = s2[j];
	return (cat);
}
