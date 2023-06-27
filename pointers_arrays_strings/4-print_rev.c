#include "main.h"

void print_rev(char *s)
{
	int end, length =0;

		while (s[lenght] !='\0')
		{
			length++;
		}
		end = length -1;

		while (end >=0)
		{
			_putchar(s[end]);
			end--;
		}
	_putchar('\n');
}
