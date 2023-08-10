#include "main.h"


char *handle_char(char *file);
void file_closer(int fd);

/**
  * handle_char - gives 1024 bytes to manage letters.
  * @file: The name of the char handler file that's storing chars.
  *
  * Return: A pointer to the char handler.
  */
char *handle_char(char *file)
{
	char *letter;

	letter = malloc(sizeof(char) * 1024);

	if (letter == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (letter);
}
/**
  * file_closer - Closes files.
  * @FDfile: The file closed.
  */
void file_closer(int FDfile)
{
	int CL;

	CL = close(FDfile);

	if (CL == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FDfile);
		exit(100);
	}
}
/**
  * main - Copies the text of one file to another.
  * @argc: Things the function will copy.
  * @argv: array for the things.
  *
  * Return: 0 on success.
  * ------- If count is wrong - 97.
  * ------- If the file to copy from does not exist/cannot be read - return(98).
  * ------- If the file to copy to cannot be created/written to - return(99).
  * ------- If file to copy to/from cannot be closed - return(100).
  */
int main(int argc, char *argv[])
{
	int FROM, TO, RD, WR;
	char *letter;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
letter = handle_char(argv[2]);
	FROM = open(argv[1], O_RDONLY);
	RD = read(FROM, letter, 1024);
	TO = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (RD > 0)
	{
		if (FROM == -1 || RD == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(letter);
			exit(98);
		}

		WR = write(TO, letter, RD);
		if (TO == -1 || WR == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(letter);
			exit(99);
		}

		RD = read(FROM, letter, 1024);
		TO = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(letter);
	file_closer(FROM);
	file_closer(TO);

	return (0);
}