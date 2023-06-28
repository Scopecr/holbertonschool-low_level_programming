#include "main.h"
/**
 * _strcat - function that change variable
 *
 * @dest: car type string
 * @src: char type string
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
