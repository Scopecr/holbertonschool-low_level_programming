#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints ints in arguments
 * @separator: string that seperates ints
 * @n: # of ints passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}

	va_end(args);

	printf("\n");
}