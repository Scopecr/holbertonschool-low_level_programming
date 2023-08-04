#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - print all the elements of the list
 * @count: counts the elements to print
 *
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("%lu", count);
        h = h->next;
        ++count;
    }
    return (count);
}