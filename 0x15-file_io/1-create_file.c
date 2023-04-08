#include "main.h"

/**
 * _strlen - get length of string
 * @s: string
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: file
 * @text_content: string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int p;
	ssize_t lent, pas;

	p = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);

	if (p == -1)
	{
		p = open(filename, O_WRONLY | O_TRUNC);
		if (p == -1)
			return (-1);
	}

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		lent = _strlen(text_content);
		pas = write(p, text_content, lent);
		if (pas == -1)
		{
			close(p);
			return (-1);
		}
	}

	close(p);
	return (1);
}
