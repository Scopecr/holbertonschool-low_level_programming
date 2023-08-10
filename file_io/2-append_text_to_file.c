#include "main.h"
/**
 * append_text_to_file - function that appends a text file
 * @filename: pointer to the file to be appended
 * @text_content: content to be added to file
 * 
 * Return: if NULL -1 fails
 *	if file exist return 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content = NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		return (-1);
	}
	close (fd);
	return (1);
}
