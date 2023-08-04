#include "lists.h"
/**
 * add_dnodeint_end - adds end node to the dlist
 * @enode is the ponter to new node
 * Return: 1 if error enode if success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *enode = malloc(sizeof(dlistint_t));

	if (enode == NULL)
		return (NULL);

	enode->n = n;
	enode->next = NULL;

	if (*head == NULL)
	{
		enode->prev = NULL;
		*head = enode;
	}
	else
	{
		dlistint_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = enode;
		enode->prev = current;
	}

	return (enode);
}
