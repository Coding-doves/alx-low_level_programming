#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int cp_to_file(const char *file_from, char *file_to);
ssize_t str_len(const char *s);

/**
* main - copy of a file to another
* @argc: number of argument
* @argv: string 
* Return: 0 on success, exit_failure on failure
*/
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        dprintf(2, "Usage: cp %s file_to\n", argv[0]);
        exit(97);
    }
    cp_to_file(argv[1], argv[2]);
    return (0);
}
/**
* cp_to_file -copy of a file to another
* @file_from: name of the file
* @file_to: string to add at the end of the file
* Return: 1 on success, exit_failure on failure
*/
int cp_to_file(const char *file_from, char *file_to)
{
int fd, fd2;
ssize_t n, a, st[1024];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (file_from == NULL || file_to == NULL)
return (-1);

fd = open(file_from, O_RDONLY);
if (fd == -1)
{
dprintf(2, "Error: Can't read from file %s", file_from);
exit(98);
}
fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, mode);
if (fd2 == -1)
{
dprintf(2, "Error: Can't write to %s", file_to);
exit(99);
}

while((n = read(fd, st, str_len(file_from))) > 0)
{
    a = write(fd2, st, n);
    if (a != n)
    {
	dprintf(2, "Error: Can't write to %s", file_to);
    	exit(99);
    }
}
if (n == -1)
{
dprintf(2, "Error: Can't read from file %s", file_from);
exit(98);
}

if (close(fd)  == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd);
exit(100);
}
if (close(fd2) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd2);
exit(100);
}
return (0);
}

/**
* str_len - get lenght of string
* @s: input
* Return: string size
*/
ssize_t str_len(const char *s)
{
        ssize_t i;

        for (i = 0; s[i]; i++)
                ;
        return (i);
}
