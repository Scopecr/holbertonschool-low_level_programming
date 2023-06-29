#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: difference in ASCII value or 0 for true
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		i++;
	}

	return (0);
}
