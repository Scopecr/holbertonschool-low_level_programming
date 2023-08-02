#include "lists.h"
/*
 *add_node - adds new node to lists
 *@head: a pointer to a pointer
 *@str: pointer to contant character
 *Return: address of the new element null
 */

list_t *add_node(list_t **head, const char *str)
{
	lists_t* new_node = (lists_t*)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return(NULL);
	}
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
