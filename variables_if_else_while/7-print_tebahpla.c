#include <stdio.h>

/**
 * main - entry point
 * i vatiable - identifing the letter
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}
	putchar('n');

	return (0);
}
