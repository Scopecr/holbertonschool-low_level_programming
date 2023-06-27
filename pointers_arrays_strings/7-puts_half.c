#include "main.h"
/**
 * puts_half - prints half of the string
 *
 *@str: variable to be devited
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
if ((i % 2) != 0)
	i = i + 1;

i = i / 2;

while (*(str + i) != '\0')
{
	_putchar(*(str + i));
	i++;
}
_putchar(10);
}
