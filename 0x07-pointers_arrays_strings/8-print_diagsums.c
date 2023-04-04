#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2D array of int types
 * @n: size of array (square)
 */

void print_diagsums(int *a, int n)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < n; i++)
	{
		s1 += a[i];
		s2 += a[n - i - 1];
		a += n;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
