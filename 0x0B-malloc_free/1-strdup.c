#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get the length of string
 * @len: variable
 * Return: i
 */

int _strlen(char *len)
{
	unsigned int i = 0;

	while (len[i] == '\0')
		i++;
	return (i + 1);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: parameter
 * Return: newp
 */

char *_strdup(char *str)
{
	char *newp;
	int i;

	if (str == NULL)
		return (NULL);

	newp = (char *)malloc(sizeof(char) * _strlen(str));

	if (newp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		newp[i] = str[i];

	free(newp);
	return (newp);
}
