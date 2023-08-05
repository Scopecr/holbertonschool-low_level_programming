#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list.
 *
 * @h: list given to us
 * @idx: the index for the position of node
 * @n: the n it will contain
 *
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *h2 = *h, *nodepointer;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		h2 = (*h2).next;
		if (h2 == NULL)
		{
			return (NULL);
		}
	}

	if ((*h2).next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	nodepointer = malloc(sizeof(dlistint_t));
	if (nodepointer == NULL)
	{
		return (NULL);
	}

	(*nodepointer).n = n;
	(*nodepointer).prev = h2;
	(*nodepointer).next = (*h2).next;
	(*(*h2).next).prev = nodepointer;
	(*h2).next = nodepointer;

	return (nodepointer);
	