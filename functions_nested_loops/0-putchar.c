#include "main.h"
/**
 *main - entry point
 *char message - prints _putchar
 *
 * Return: always 0
 */
int main(void)
{
	char message[] = "_putchar\n";

	write(STDOUT_FILENO, message, sizeof(message) - 1);

	return (0);
}
