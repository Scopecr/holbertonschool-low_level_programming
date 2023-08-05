#include "lists.h"
/**
 * get_dnodeint_at_index - function that gets the nth node
 * @i: pointer to the head pointer
 * @index: unsigned interger
 * @head: pointer of list
 * Return: NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head)
	{
		if (i == index)
		{
		return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
