#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string len
 * @n: char to count
 * Return: i
 */

int _strlen(char *n)
{
	size_t i;

	while (n[i] != '\0')
		n[i++];
	return (i);
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
	size_t i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * (_strlen(s1) + n + 1))
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; n >= s2[j]; j++)
		ptr[i + j] = s2[j];

	ptr[i] = '\0';
	return (ptr);
}
