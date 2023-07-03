#include "main.h"
/**
 * _pow_recursion - function that elevates x to the power of y
 *
 * @y: variable as exponent
 * @x: variable to be elevated by y
 * Return: -1 if @y is lower than 0 and 1 if equal to 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
