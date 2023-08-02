#include "lists.h"
/**
 * print_list - prints all the list of the string
 * @h: pointer to the list_t list to point
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nill)\n");
		else
			printf("[%u] %d\n", h->len, h->str);
		h = h->next;
	}
	return (s);
}