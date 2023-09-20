#include "lists.h"
/**
 * add_node - adds a new node to the top of the list.
 *
 * @head: the list given to us.
 * @str: name of node
 *
 * Return: head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)

		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (*head);
}
