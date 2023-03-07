#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string to be compared
 * @needle: substring
 * Return: a pointer to the beginning of the located substring, or NULL if
 *  the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len1 = strlen(haystack), len2 = strlen(needle);
	
	for (i = 0; i < len1; i++)
	{
		 if (haystack[i] == needle[0])
		 {
		 	bool = 0;
			for (j = 0; j < len2; j++)
			{
				if (haystack[i +j] != n[j])
				{
					bool = 1;
					break;
				}
			}
			if (bool == 0)
			{
			return(i);
			}
		 }
	}
	return (-i);
}
