#include "main.h"
/**
 * binary_to_unit - converts a binary number to unsigned interger
 * @b: string containing the binary number
 * 
 * Return: the converted number
*/
unsigned int binary_to_unit(const char *b)
{
	unsigned int decimal;
	unsigned int i;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
		decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
		return (0);
	}
	return (decimal);
}
