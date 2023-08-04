#include "lists.h"
/**
 * freelist - frees the dlistint_t
 * 
 * @head: list given to free
 * 
 * Return: 
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *liberty;

	while (head)
	{
		liberty = head->next;
		free(head);
		head = liberty;
	}
}
