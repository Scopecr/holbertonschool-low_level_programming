#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *nstr, *empt;

	if (*s1 == NULL)
		s1 = " ";
	if (*s2 == NULL)
		s2 = " ";

