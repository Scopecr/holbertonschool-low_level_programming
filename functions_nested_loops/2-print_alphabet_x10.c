#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
