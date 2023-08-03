#include "lists.h"

/**
 *free_list - a fucntion that frees a list
 *@head: pointer to the start of a list
 */
void free_list(list_t *head)
{

	list_t *temp;

<<<<<<< HEAD
	if (head == NULL)
	{
		free(head);
		return;
	}

	temp = head;
	while (head->next != NULL)
=======
	while (head)
>>>>>>> 506d814c8a9e41073efd55cd3805da139acafb09
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	head = head->next;
	free(head);
}
