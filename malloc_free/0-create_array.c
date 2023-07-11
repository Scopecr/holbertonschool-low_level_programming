#include "main.h"
#include <string.h>

char *create_array(unsigned int size, char c)
{

	char *array = (char *)malloc(sizeof(char) * size);
	memset(array, c, size);
	return (array);
}
