#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get string length
 * @c: pointer
 * Return: i to pass length through pointer
 */

unsigned int _strlen(char *c)
{
	unsigned int i;

	while (c[i] != '\0')
		i++;
	return (i + 1);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: destination
 * @s2: source
 * @n: number of source to copy
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, res, len, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1);
	len = _strlen(s2);

	if (n >= s2_len)
		res = s1_len + s2_len
	else
		res = s1_len + n;

	ptr = malloc(res + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
