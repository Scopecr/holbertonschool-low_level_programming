#include "main.h"
#include <stdlib.h>

/**
 * main - executes the function
 * @argc: holds element count
 * @argv: point to a pointer string
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i = 1, result = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= strtol(argv[i], NULL, 10);
		}
		printf("%d]n", result);
	}
	return (0);
}

