#include "3-calc.h"

/**
*op_add - adds a and b
*/

int (*get_op_func(char *s))(int, int)
{
int op_add(int a, int b)
{
    return (a + b);
}

/**
*op_sub - subtracts a and b
*/

int op_sub(int a, int b)
{
    return (a - b);
}

/**
*op_mul - multiply a and b
*/

int op_mult(int a, int b)
{
    return (a * b);
}

/**
*op_div - divide a and b
*/

int op_div(int a, int b)
{
    return (a / b);
}

/**
*op_mod - mod a and b
*/

int op_mod(int a, int b)
{
    return (a % b);
}
}