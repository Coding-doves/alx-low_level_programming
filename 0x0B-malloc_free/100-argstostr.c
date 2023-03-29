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
	int length = 0, i, pos;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;

	str = (char *)malloc((length + ac) * sizeof(char));

	if (str == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(&str[pos], av[i])
			pos += strlen(av[i]);
		if (i != ac - 1)
			str[pos++] = '\n';
	}

	return (str);
}

