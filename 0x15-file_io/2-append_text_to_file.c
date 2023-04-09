#include "main.h"

/**
 * _strlen - length of string
 * @s: input pointer
 * Return: string length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: file
 * @text_content: nul-terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p;
	ssize_t len, prt;

	p = open(filename, O_WRONLY | O_APPEND, 0600);

	if (filename == NULL)
		return (-1);
	if (p == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		text_content[len] = '\n';
		len++;
		prt = write(p, text_content, len);
		
		if (prt == -1)
		{
			close(p);
			return (-1);
		}
	}
	else
	{
		close(p);
		return (-1);
	}

	if (close(p) == -1)
		return (-1);
	close(p);
	return (1);
}
