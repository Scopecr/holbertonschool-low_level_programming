#include <stdio.h>
#include "main.h"
/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void _puts(char *str)
{
	for (; *str < 10; *str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
