#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: variable representing the number that is to be factorial
 *
 * Return: -1 if @n is lower than 0 and 1 if @n is equal to 0
*/
int factorial(int n)
{
	{
		if (n < 0)
			return (-1);

		if (n == 0)
			return (1);

		return (n * factorial(n - 1));
	}

}
