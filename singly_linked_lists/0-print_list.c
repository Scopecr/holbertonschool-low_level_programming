#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t n = 0;

    while (h)
    {
        n++;
        h = h->next;
    }
    return (0);
}
