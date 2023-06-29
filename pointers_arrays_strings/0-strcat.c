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
	int j = _strlen(dest);

	for (i=0; src[1] !='\0'; i++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';

	return (dest);
}
