#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of i in a doubly linked list.
 *
 * @h: the list given to us
 *
 * Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = (*h).next;
	}

	return (i);
}