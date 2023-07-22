#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: constant
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";
	va_list args;

	f_t f_types[] = {
		{"c", print_char},
			{"i", print_int},
			{"f", print_f},
			{"s", print_str},
			{NULL, NULL}
	};
	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *f_types[j].id)
			{
				f_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - print anything
 * @separator: space
 * @args: arguments
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - print anything
 * @separator: space
 * @args: arguments
 */
void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_f - print anything
 * @separator: space
 * @args: arguments
 */
void print_f(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_str - print anything
 * @separator: space
 * @args: arguments
 */
void print_str(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}