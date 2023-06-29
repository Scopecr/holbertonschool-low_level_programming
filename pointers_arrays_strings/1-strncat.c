#include "main.h"
/**
 * _strncat - function that links two strings together
 *
 * @dest: is the variable for the destination
 * @src: variable for source
 *
 * @n: is the variable containing most of the value of src
 *
 * Return: dest[i]
 */
char *_strncat(char *dest, char *src, int n)
{
	 int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}


	dest[i] = '\0';

	return (dest);
}


