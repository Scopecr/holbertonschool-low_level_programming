#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * char alphabet - variable for printing
 *
 * putchar - prints
 *
 * Return: always 0 success
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}

	putchar('\n');

	return (0);
}
