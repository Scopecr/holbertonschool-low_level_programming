#include <stdio.h>
/**
 * main - starting point
 *
<<<<<<< HEAD
 * int num - variable indicates the increase in value
=======
 * char n - indicates the increase in value
>>>>>>> 7058df4ec1ee456391dcb0e1d322d885836d16b4
 *
 * Return: always 0 (Success)
 */

int main(void)
{
<<<<<<< HEAD
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
=======
	char n;

	for (n == 0; n < 10; n++)
	{
		putchar(n);
	}

	putchar('\n');
>>>>>>> 7058df4ec1ee456391dcb0e1d322d885836d16b4

	return (0);
}
