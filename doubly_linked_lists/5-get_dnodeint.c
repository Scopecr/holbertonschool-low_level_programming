#include "lists.h"
/**
 * get_dnodeint_at_index - function that gets the nth node
 * @i: pointer to the head pointer
 * @count: vatiable to count how many nodes i have
 *
 * Returns: NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *i = head;
	unsigned int count = 0;

	if (i == NULL)
	return(NULL);

	while (count == index)
	{
		return (i);

		count++;
		i = i->next;
	}
	return (NULL);
}
