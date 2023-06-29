#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @cap: input string
 * Return: int
 */

char *cap_string(char *cap)
{
int i, n;
char comp[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (i == 0 && cap[i] >= 'a' && cap[i] <= 'z')
		{
			cap[i] -= 32;
		}

		for (n = 0; n < 13; n++)
		{
			if (cap[i] == comp[n])
			{
				if (cap[i + 1] >= 'a' && cap[i + 1] <= 'z')
					cap[i + 1] -= 32;
			}
		}
	}
	return (cap);
}
