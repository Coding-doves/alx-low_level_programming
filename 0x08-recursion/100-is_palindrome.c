#include "main.h"

/**
 * check_palin_len - gets string length
 * @s: string
 * Return: string length
 */

int check_palin_len(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
		return (1);
	else
		return (check_palin_len(&s[1] + 1));
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
	else if (s[f] == s[l])
	{
		return (check_palindrome(s, f + 1, l - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: 1 if palin and 0 if not palin
 */

int is_palindrome(char *s)
{
	return (check_palindrome(s, check_palin_len(s) - 1, 0));
}
