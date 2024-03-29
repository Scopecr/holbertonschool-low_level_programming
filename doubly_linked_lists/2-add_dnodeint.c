#include "lists.h"

/**
 * add_dnodeint - adds a new node to the top of the list.
 *
 * @head: the list given to us.
 * @n: integer of node?
 *
 * Return: pointer to node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	(*node).n = n;
	(*node).prev = NULL;
	(*node).next = *head;

	if (*head != NULL)
	{
		(*head)->prev = node;
	}

	*head = node;

	return (node);
}
