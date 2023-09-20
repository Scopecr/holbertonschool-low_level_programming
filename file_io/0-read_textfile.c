#include "main.h"

/**
 * read_textfile - free's the alocated space of the list.
 *
 * @filename: the name of the file provided.
 * @letters: the letters that the text has.
 *
 * Return: pointer to node.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t OP, RD, WR;
	char *CurrLet;

	if (filename == NULL)
	{
		return (0);
	}

	CurrLet = malloc(sizeof(char) * letters);
	if (CurrLet == NULL)
	{
		return (0);
	}

	OP = open(filename, O_RDONLY);
	RD = read(OP, CurrLet, letters);
	WR = write(STDOUT_FILENO, CurrLet, RD);

	if (OP == -1 || RD == -1)
	{
		free(CurrLet);
		return (0);
	}

	if (WR == -1 || WR != RD)
	{
		free(CurrLet);
		return (0);
	}

	free(CurrLet);
	close(OP);

	return (WR);
}
