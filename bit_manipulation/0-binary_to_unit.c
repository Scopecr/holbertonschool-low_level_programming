#include "bitmani.h"
/**
 * 
*/
unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	for (int i = 0; b[i] !='\0'; i++)
	{
		if (b[i] != '0'&& b[i] != '1')
		return (0);

		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}
