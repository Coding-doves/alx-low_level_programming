#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function to copy string
 * @ac: input
 * @av: input
 * Return:0
 */

char *argstostr(int ac, char **av)
{
	int length = 0, i, j, pos;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;

	str = (char *)malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++) {
		str[pos++] = av[i][j];
        }
		str[pos++] = '\n';
	}
	str[pos] = '\0';
	return (str);
}

