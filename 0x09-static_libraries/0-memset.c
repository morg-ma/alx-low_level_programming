#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @x: pointer to put the constant
 * @y: constant
 * @z: max bytes to use
 * Return: pointer x
 */

char *_memset(char *x, char y, unsigned int z)
{
	unsigned int i;

	for (i = 0; z > 0; i++, z--)
	{
		x[i] = y;
	}

	return (x);
}
