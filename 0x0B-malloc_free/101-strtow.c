#include <stdlib.h>
#include <string.h>

int count_words(char *str);
int next_word_length(char *str);
char *copy_next_word(char *str, int length);

char **strtow(char *str)
{
	int num_words, word_index, word_length;
	char **words;

	if (str == NULL || str[0] == '\0')
		return NULL;

	num_words = count_words(str);

	words = (char**)malloc((num_words + 1) * sizeof(char*));
	if (words == NULL)
		return NULL;

	word_index = 0;
	while (*str != '\0'){
		while (*str == ' ')
			str++;

		if (*str == '\0')
			break;

	word_length = next_word_length(str);
        char *word = copy_next_word(str, word_length);
        if (word == NULL) {
            for (int i = 0; i < word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        words[word_index++] = word;

	str += word_length;
	}

	words[num_words] = NULL;

	return words;
}

int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' && in_word)
			in_word = 0;

		else if (*str != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return count;
}

int next_word_length(char *str)
{
	int length = 0;

	while (*str != '\0' && *str != ' ')
	{
		length++;
        	str++;
	}
	return length;
}

char *copy_next_word(char *str, int length)
{
	int i;
	char *word;

	word = (char*)malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return NULL;

	for (i = 0; i < length; i++)
		word[i] = *str++;
	
	word[length] = '\0';
	return word;
}

