#include "3-calc.h"

int (*get_op_func(char *s)(int, int))
{
    op_t ops[] = 
{
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    
    int i;
    while (i < 5)
    {
        if (strcmp(s, ops[i].name) == 0)
            return (ops[i].f);
        i++;
    }
    rerutn (NULL);
}