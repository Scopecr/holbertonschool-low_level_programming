#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 * @size: size of a hashtable
 *
 * Return: hash table strings when added.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *new_h;

	new_h = malloc(sizeof(hash_table_t));
	if (new_h == NULL)
	{
		return (NULL);
	}

	new_h->size = size;
	new_h->array = malloc(sizeof(hash_table_t *) * size);
	if (new_h->array == NULL)
	{
		return (NULL);
	}

	return (new_h);
}
