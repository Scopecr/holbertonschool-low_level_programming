#include "main.h"
#include <string.h>
/**
 * create_array - create the array to be printed
 * malloc - returnd value to the char pointer
 * @c: is the array to be printed
 * @size: lenght of array
 * Return: array for success
 */

char *create_array(unsigned int size, char c)
{

	char *array = NULL;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	memset(array, c, size);
	return (array);
}
