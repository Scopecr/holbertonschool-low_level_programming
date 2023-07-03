#include "main.h"
/**
 * _strlen_recursion - function that prints the length of a string
 * @s: string to be printed
 *
 * Return: 0 if null 1 + _strlen_recursion f s + 1
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
