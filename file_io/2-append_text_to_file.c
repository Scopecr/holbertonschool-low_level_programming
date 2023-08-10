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
	int fd, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	
	w = write(fd, text_content, len);
	close(fd);
	if (w < 0)
	{
		return (-1);
	}

	return (1);
}
