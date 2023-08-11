#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
/**
 * read_textfile - free's the alocated space of the list.
 *
 * @filename: the name of the file provided.
 * @letters: the letters that the text has.
 *
 * Return: pointer to node.
 */
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
