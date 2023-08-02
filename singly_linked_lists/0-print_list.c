#include "lists.h"
/**
 * print_list - prints all the list of the string
 * @h: pointer to the list_t list to point
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}
