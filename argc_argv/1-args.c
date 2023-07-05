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

	for (i = 0; 1 < argc; i++)
	{
		printf("args[%s]\n", argv[i]);
	}
	return (0);
}
