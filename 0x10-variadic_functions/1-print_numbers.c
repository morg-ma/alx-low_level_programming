#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list Ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(Ap, n);

	while (i--)
		printf("%d%s", va_arg(Ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(Ap);
}
