#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 * Return: the integer sums
 */

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, i = n;
	va_list Ap;

	if (!n)
		return (0);
	va_start(Ap, n);
	while (i--)
		x += va_arg(Ap, int);
	va_end(Ap);
	return (x);
}
