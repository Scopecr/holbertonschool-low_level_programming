#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, c = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				c++;
				i++;
				j = 0;
			}

			else if (accept[j] != s[i])
				j++;
		}
		return (c);
	}
	return (c);
}
