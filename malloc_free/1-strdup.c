#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate a string
 * @str: the string to suplicate
 * Return: pointer to the duplicated string, or NULL if str is NULL
 */

char *_strdup(char *str)
{

	char *duplicate = NULL;
		size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate != NULL)
		strcpy(duplicate, str);

	return (duplicate);
}
