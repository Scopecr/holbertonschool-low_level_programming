#include<stdio.h>

/**
 * main - Entery point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of an long int: %lu byte(s)\n", sizeof(b));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of an long float: %lu byte(s)\n", sizeof(f));
	return (0);
}
