#include "main.h"
#include <stdio.h>
/**
 */
void puts2(char *str)
{

	for (*str = 0; *str != '\0'; *str + 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
