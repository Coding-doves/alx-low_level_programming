#include "main.h"

/**
* read_textfile - function that reads a text file and prints it.
* @filename: file to read from
* @letters: number of chars to read
* Return: number of letters read or 0 if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, w = 0, r_b = 0;
	int fil;
	char *st;

	if (filename == NULL)
		return (0);

	fil = open(filename, O_RDONLY);

	if (fil == -1)
		return (0);

	st = malloc(letters + 1);
	if (st == NULL)
		return (0);

	while (letters > 0)
	{
		n = read(fil, st, letters);
		if (n == -1)
		{
			free(st);
			close(fil);
			return (0);
		}

		if (n == 0)
			break;
		st[n] = '\0';

		w += write(STDOUT_FILENO, st, n);
		if (w == -1)
		{
			free(st);
			close(fil);
			return (r_b);
		}
		r_b += n;
		letters -= n;
		if (letters == 0)
			break;
	}

	free(st);
	close(fil);
	return (r_b);
}
