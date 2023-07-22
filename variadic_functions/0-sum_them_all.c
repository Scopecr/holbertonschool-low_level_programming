#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that sums them all
 * @va_list: type of iterating argument
 * @va_start:Retrieve the argument
 * @va_end: Free va_list
 * Return - the sum of all the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);
    int sum = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    return (sum);
}