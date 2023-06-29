#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @a: input string
 * Return: pointer
 */

char *string_toupper(char *a)
{
	int i = 0, upper = 'a' - 'A';
	{
		while (a[i] != '\0')
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] = a[i] - upper;

		i++;
		}
	}
	return (a);
}
