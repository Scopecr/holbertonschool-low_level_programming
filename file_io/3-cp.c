#include "main.h"
/**
 * main - copies contents of a file to another file
 * @argc: # of arguments
 * @argv: list of arguments
 * Return: always 0 if not STDERR
 */

int main(int argc,char *argv[])
{
	int file_from, file_to, buffer_l = 1024, write_l = 0;
	char buffer [1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", argc);
		error (97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		error(98);
	}
	file_to = write(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write  to %s\n", argv[2]);
		close(file_form), error(99);
	while (buffer_l == 1024)
	{
		buffer_l = read(file_form, buffer, 1024);if (buffer_limit == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

	write_l = write(file_to , buffer, buffer_l);
		if (write_l < buffer_l)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]); exit(99);
	}
	if (close(file_form) == -1)
		dprintf(STDERR_FILENO, "Error: Can't lose fd %d\n", file_from), exit(99);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", file_to), exit(100);
return (0);
}