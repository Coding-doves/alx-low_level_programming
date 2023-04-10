#include "main.h"
#define BUFFER 1024

int cp_file(char *file_to, char *file_from);
/**
 * main - copy file frommone destination to another
 * @argc: number of argument
 * @argv: string argument
 * Return: 0
 */


int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(argv[1], argv[2]);

	return (0);
}

/**
 * cp_file - file copying
 * @file_to: destination
 * @file_from: src file
 * Return: 0
 */

int cp_file(char *file_from, char *file_to)
{
	int dest, src;
	char cp[BUFFER];
	ssize_t d, s;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	src = open(file_from, O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}


	while ((s = read(src, cp, BUFFER)) > 0)
	{
		d = write(dest, cp, s);
		if (d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(dest) == -1 || close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", STDERR_FILENO);
		exit(100);
	}

	return (0);
}
