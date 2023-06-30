#include "main.h"

/**
 *_memset - function that fils memory with a constanst byte.
 *
 * @n: unsigned value
 * @s: the address to fill n
 * @b: the constant to fill n
 *
 * Return: s for success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

