#include "main.h"
/**
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; 1 < argc; i++)
	{
		printf("argv[%s]\n", argv[i]);
	}
	return (0);
}
