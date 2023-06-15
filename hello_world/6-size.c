#include<stdio.h>

/**
 * main - Entery point
 * float - Datatype for floating point
 * double - Also a datatype represents float
 * char - a point of character
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	/* sizeof evaluates the size of a variable*/
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
