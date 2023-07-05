#include "main.h"

/**
 * argc - has the file and name
 * argv - i a array of strings
 * @i: the varible used to count the charactrs on the string
 *
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar('argv[%s]', argv[i]);
	}
	return (0);
}
