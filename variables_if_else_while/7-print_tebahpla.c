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

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('n');

	return (0);
}
