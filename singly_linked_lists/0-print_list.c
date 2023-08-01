#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the list of the string
 * @h: pointer to the list_t list to point
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL) {
        if (current->str != NULL) {
            printf("%s\n", current->str);
        } else {
            printf("[0] (nil)\n");
        }
        count++;
        current = current->next;
    }

    return (count);
}

