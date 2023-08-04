#include "lists.h"
/**
 * add_dnodeint_end - adds end node to the dlist
 * @enode is the ponter to new node
 * Return: 1 if error enode if success
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *enode = malloc(sizeof(dlistint_t));

    *enode->next = NULL;
    if (list->head == NULL)
    {
        list->head = enode;
    }
    else
    {
        list->current->next = enode;
    }
    list->current = enode;
    if (enode == NULL)
    return (1);
    else
    return (enode);
}