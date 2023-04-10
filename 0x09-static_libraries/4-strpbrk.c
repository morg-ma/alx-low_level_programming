#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @a: string to match
 * Return: pointer to the byte in s that matches one of the bytes in a
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *a)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (a[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
