#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Returns the number of i in a doubly linked list.
 *
 * @h: the list given to us
 *
 * Return: i.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (i);
}