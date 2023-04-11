#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, size;
	char *n;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	/* +1 on the size puts the end of string character*/
	n = malloc(size * sizeof(*str) + 1);

	if (n != 0)
	{
		for (i = 0; i < size; i++)
			n[i] = str[i];
	}
	else if (n == 0)
		return (NULL);

	return (n);
}
