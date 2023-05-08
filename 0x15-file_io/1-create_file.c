#include "main.h"

/**
* str_len - get lenght of string
* @s: input
* Return: string size
*/
int str_len(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
* create_file - function that creates a file..
* @filename: name of the file to create
* @text_content: string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fil;
	ssize_t n = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fil = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, mode);

	if (fil == -1)
		return (-1);

	if (text_content != NULL)
	{
	n += write(fil, text_content, str_len(text_content));
	if (n != str_len(text_content))
	{
		close(fil);
		return (-1);
	}
	}

	close(fil);
	return (1);
}
