#include "main.h"
/**
 *_strlen determens the length of s
 *@s the variable to be mesured
 *
 *Return: length for the mesument
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
