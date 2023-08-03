#include "list.h"

/**
 *free_list - a fucntion that frees a list
 *@head: pointer to the start of a list
 */
void free_list(list_t *head)
{

	list_t *temp;

	if (head == NULL)
	{
		free(head);
		return;
	}

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	head = head->next;
	free(head);
}
