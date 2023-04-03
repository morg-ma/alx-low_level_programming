#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @a: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *a)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != s[i]; j++)
		{
			if (a[j] == '\0')
				return (i);
		}
	}
	return (i);
}
