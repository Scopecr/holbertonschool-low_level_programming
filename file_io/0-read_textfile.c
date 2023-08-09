#include "main.h"
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	/**
	 * read_textfile - reads filename from STDOUT
	 * @filename: file to be read
	 * @letters: number of letters to be read
	 * Return: w - actual number of bytes read and printed
	 * 	0 when function fails or filename is NULL
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
	buf = malloc(siezof(char)*letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, but, t);

	free(buf);
	close(fd);
	return(w);
}