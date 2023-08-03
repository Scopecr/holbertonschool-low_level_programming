#include "lists.h"
/**
 **add_node_end- adds a new node to the end of a list
 *@head: points to the begining of a list
 *@str: points to a constant string
 *Return: &(add) of new tail of NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *b_node = malloc(sizeof(list_t));
	list_t *temp;

	if (str == NULL || b_node == NULL)
		return (NULL);

	b_node->str = strdup(str);
	b_node->len = strlen(str);
	b_node->next = NULL;

	if (*head == NULL)
	{
		*head = b_node;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_tail;
	return (temp);
}
