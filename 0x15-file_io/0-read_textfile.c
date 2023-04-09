#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print or 0 for error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *let = (char *)malloc(letters + 1);
	int p;
	ssize_t prt;

	p = open(filename, O_RDONLY);

	if (filename == NULL || let == NULL)
		return (0);
	if (p == -1)
	{
		free(let);
		return (0);
	}

	prt = read(p, let, letters);
	if (prt == -1)
	{
		free(let);
		close(p);
		return (0);
	}

	let[prt] = '\0';
	write(STDOUT_FILENO, let, prt);

	free(let);
	close(p);
	return (prt);
}
