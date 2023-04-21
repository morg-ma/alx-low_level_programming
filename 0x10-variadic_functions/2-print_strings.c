#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 * Return: NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *star;
	va_list Ap;

	if (!n)
	{
		printf("\n");
	return;
	}
	va_start(Ap, n);

	while (i--)
		printf("%s%s", (star = va_arg(Ap, char *)) ? star : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(Ap);
}
