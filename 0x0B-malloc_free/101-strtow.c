#include <stdlib.h>
#include <string.h>

#define DELIMITER " "

/**
 * count_words - function to count words
 * @str: input str
 * Return: count
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (*str == ' ')
			is_word = 0;
		else if (!is_word)
		{
			count++;
			is_word = 1;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - function to split string into word
 * @str: input to split
 * Return: NULL or " "
 */

char **strtow(char *str)
{
	int i, j;
	char **words;
	int word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;

		if (*str == '\0')
			break;

		j = 0;
		while (str[j] != ' ' && str[j] != '\0')
		j++;

		words[i] = (char *)malloc(sizeof(char) * (j + 1));
		if (words[i] == NULL)
			return (NULL);

		strncpy(words[i], str, j);
		words[i][j] = '\0';
		i++;

		str += j;
	}

	words[word_count] = NULL;

	return (words);
}
