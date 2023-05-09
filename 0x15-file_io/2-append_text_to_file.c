#include "main.h"

/**
* str_len - get lenght of string
* @s: input
* Return: string size
*/
ssize_t str_len(char *s)
{
	ssize_t i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
* append_text_to_file - appends text at the end of a file...
* @filename: name of the file
* @text_content: string to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t n = 0;
int fd;

if (filename == NULL || access(filename, W_OK) == -1)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);

n = write(fd, text_content, str_len(text_content));
if (n != str_len(text_content))
{
close(fd);
return (-1);
}

return (1);
}
