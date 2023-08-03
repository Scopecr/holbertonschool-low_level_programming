#include "lists.h"
/**
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *b_node = malloc(sizeof(list_t));
	list_t *temp;

	if (b_node == NULL || str == NULL)
		return (NULL);

	b_node->str = strdup(str);
	b_node->len = strlen(str);
	b_node->next = NULL;

	if (*head == NULL)
	{
		*head = b_node;
		return (NULL);
	}
	temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
	return (temp);
}
