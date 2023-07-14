#include "main.h"

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int ar_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar =  malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ar[i] = '\0';
	}
	return (ar);
}
