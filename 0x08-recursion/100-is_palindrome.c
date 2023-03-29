#include "main.h"

/**
 * check_palin_len - gets string length
 * @s: string
 * Return: string length
 */

int check_palin_len(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return 0;
		}
	}
	return 1;
}

/**
 * check_palindrome - confirm palindrome
 * @s: string
 * @f: first string character
 * @l: last string character
 * Return: 1 if palin and 0 if not palin
 */

int check_palindrome(char *s, int f, int l)
{
	if (f >= l)
	{
		return (1);
	}
	else if (s[f] != s[l])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s, f + 1, l - 1));
	}
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: 1 if palin and 0 if not palin
 */

int is_palindrome(char *s)
{
	int len = check_palin_len(s);
	return (check_palindrome(s, 0, len - 1));
}
