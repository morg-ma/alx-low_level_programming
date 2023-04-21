#include "variadic_functions.h"

/**
 * format_char - formats charactar.
 * @separator: the string separator.
 * @Ap: argument pointer
 */
void format_char(char *separator, va_list Ap)
{
	printf("%s%c", separator, va_arg(Ap, int));
}

/**
 * format_int - formats integer.
 * @separator: the string separator.
 * @Ap: argument pointer
 */
void format_int(char *separator, va_list Ap)
{
	printf("%s%d", separator, va_arg(Ap, int));
}

/**
 * format_float - formats float.
 * @separator: the string separator.
 * @Ap: argument pointer
 */
void format_float(char *separator, va_list Ap)
{
	printf("%s%f", separator, va_arg(Ap, double));
}

/**
 * format_string - formats string.
 * @separator: the string separator.
 * @Ap: argument pointer
 */
void format_string(char *separator, va_list Ap)
{
	char *star = va_arg(Ap, char *);

	switch ((int)(!star))
		case 1:
			star = "(nil)";

	printf("%s%s", separator, star);
}

/**
 * print_all - prints anyone
 * @format: the format string
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list Ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(Ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].i(separator, Ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(Ap);
}
