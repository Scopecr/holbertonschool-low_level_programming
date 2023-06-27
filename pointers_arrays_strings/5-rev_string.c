#include "main.h"
#include <stdio.h>

/**
 * rev_string - puts a string to stdout reversed
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;

	while (*(s + len) != '\0')
		len++;
	len--;

	for (i = 0, j = len; i < j; i++, j--)
	{
		char temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
