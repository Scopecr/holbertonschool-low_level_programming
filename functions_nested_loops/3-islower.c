#include "main.h"
#include <ctype.h>
/**
 * islower - identifies the lower case ad promps to return1
 *
 * Return: 1 if lower case found
 *
 * Return: 0 success no lower case
 */
	int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);

}
