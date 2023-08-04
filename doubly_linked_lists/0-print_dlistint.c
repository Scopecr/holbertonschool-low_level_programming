#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Returns the number of nodes in a doubly linked list.
 *
 * @h: the list given to us
 *
 * Return: nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t noudes = 0;

	while (h)
	{
		noudes++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}

	return (noudes);
}