#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Make the aphabet
 *
 * Return: always 0 success
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
