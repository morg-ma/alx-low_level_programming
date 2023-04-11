#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars.
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize.
 * Return: pointer to the array initialized or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *r = malloc(size);

	if (size == 0 || r == 0)
		return (0);

	while (size--)
		r[size] = c;

	return (r);
}
