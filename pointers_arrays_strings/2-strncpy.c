#include "main.h"
/**
 * _strncpy - function that copies dest and src variable
 * @dest: variable
 * @src: variable to be copy
 * @n:holds src value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
