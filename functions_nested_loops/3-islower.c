#include "main.h"
#include <ctype.h>
/**
 * _islower - identifies the lower case ad promps to return1
 *
 * @c: variable to specify the action
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
