#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node in the position of the list.
 *
 * @head: list given to us
 * @index: the index for the node to delete
 *
 * Return: the address of the new node.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head2 = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	for (; index != 0; index--)
	{
		if (head2 == NULL)
		{
			return (-1);
		}
		head2 = (*head2).next;
	}

	if (head2 == *head)
	{
		*head = (*head2).next;
		if (*head != NULL)
		{
			(*(*head)).prev = NULL;
		}
	}

	else
	{
		(*(*head2).prev).next = (*head2).next;
		if ((*head2).next != NULL)
		{
			(*(*head2).next).prev = (*head2).prev;
		}
	}

	free(head2);
	return (1);
}
