#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all arguments
 * @n: unsigned int
 * Return: sum or 0 on fail
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0, sum = 0;
va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}
