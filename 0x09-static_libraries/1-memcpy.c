#include "main.h"

/**
 *  *_memcpy - copies memory area
 *  @d: memory area
 *  @s: source
 *  @n: lenght of s to be copied
 *  Return: the pointer to d.
 */
char *_memcpy(char *d, char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (d);
}
