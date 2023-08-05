#include "lists.h"

/**
 * sum_dlistint - sum n from each node.
 *
 * @head: the list given to us.
 *
 * Return: sum of n.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	for (sum = 0 ; head != NULL ;)
	{
		sum += (*head).n;
		head = (*head).next;
	}

	return (sum);
}