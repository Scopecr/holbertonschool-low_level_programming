#include "main.h"
/**
 * strcopy- function that copy dest to src
 *
 * Reruen: temp for the string to print twice
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (temp);
}

