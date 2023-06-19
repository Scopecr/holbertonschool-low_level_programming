#include <stdio.h>

/**
 * main - entery point
 * for statement to start count number represented by i variable
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
