#include "lists.h"

/**
 * free_list - adds a new node to the top of the list.
 *
 * @head: the list given to us.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *freelist;

	while (head)
	{
		if (str == NULL)
		break;
		freelist = head->next;
		free head->str;
		free head;
		head = freelist;
	}
}
