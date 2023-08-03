#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t = i;
    size_t count = 0;

    while (h)
    {
        printf("%d ", count);
        h = h->next;
        ++count;
    }
    return (count);
}