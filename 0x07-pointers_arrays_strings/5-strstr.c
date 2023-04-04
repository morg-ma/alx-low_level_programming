#include "main.h"
/**
 * _strstr - Entry point
 * @h: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *h, char *n)
{
	for (; *h != '\0'; h++)
	{
		char *l = h;
		char *p = n;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
		return (h);
	}

	return (0);
}
