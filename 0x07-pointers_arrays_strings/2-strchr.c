#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @st: pointer to put the constant
 * @c: contant
 * Return: pointer to st
 */

char *_strchr(char *st, char c)
{
	int i;

	for (i = 0; st[i] >= '\0'; i++)
	{
		if (st[i] == c)
			return (st + i);
	}
	return ('\0');
}
