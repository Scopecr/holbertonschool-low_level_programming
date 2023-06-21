#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 *
 * @i: variable to represent the last digit
 *
 * Return: back to i for the value of the last digit
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);


