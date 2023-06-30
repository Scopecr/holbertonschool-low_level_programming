#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - function that locates a character in a tring
 * @s: is the pointer of the string
 * @c: is the chracter with the value of the pointer
 *
 * Return: s if c is found, NULL if theres nothing found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
	return (NULL);
}
