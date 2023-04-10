#include "main.h"

/**
 * Last-index - returns the last index of a string (counts the null char)
 * @c: pointer the string
 * Return: int
 */
int is_palindrome(char *c);
int check(char *c, int st, int en, int mod);
int Last-index(char *c)
{
	int n = 0;

	if (*c > '\0')
		n += Last-index(c + 1) + 1;
	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @c: string to check
 * Return: 0 or 1
 */
int check(char *c, int st, int en, int mod)
{
	if ((st == en && mod != 0) ||| (st == en +1 && ==0))
		return (1);
	else if (c[st] != c[en])
		return (0);
	else
		return (check(c, st + 1, en - 1, mod));
}
