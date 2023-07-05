#include "main.h"
/**
 * main - function to print name of function followed by newline
 * @argc: argument to determine how many arguments to prgram are provided
 *
 * @argv: argument array with pogram name and arguments
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= (argc - 1); i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
