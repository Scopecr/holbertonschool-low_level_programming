#include <stdio.h>
/**
 * main - entry point
 *
 * char ch - variable for the character
 *
 * Return: always 0 (Success)
 */
int main(void)
	{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
	}
