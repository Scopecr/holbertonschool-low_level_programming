#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	char *s_arg;


	while (*format)
	{
		c = *format;

		if (c == 'c')
		{
			putchar(va_arg(args, int));
		}
		else if (c == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (c == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (c == 's')
		{
			s_arg = va_arg(args, char *);

			if (s_arg == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s_arg);
			}
		}

		format++;
	}

	va_end(args);

	putchar('\n');
}

