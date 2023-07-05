#include "main.h"

/**
 * main - function that print its name
 * @argc: has the file and name
 * @argv: a array of strings
 *
 * Return: 0 success
*/
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%s]\n", argv[i]);
	}
	return (0);
}
