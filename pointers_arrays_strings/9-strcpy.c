#include "main.h"
/**
 * _strcpy - function that copy dest to src
 *
 * @dest: the variables to be copy
 *
 * @src: variable to be copy
 *
 * Return: temp for the string to print twice
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}

