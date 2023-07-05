#include "main.h"
/**
 * main - program that prints the number of argunments
 * @argc: variable that holds the program name executable
 * @argv: array that holds the string of program
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}
		return (0);
}
