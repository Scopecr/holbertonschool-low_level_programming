#include "lists.h"

/**
 *free_list - a fucntion that frees a list
 *@head: pointer to the start of a list
 */
void free_list(list_t *head)
{

	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		str = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
