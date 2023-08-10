#include "main.h"
/**
 * create_file - creates file
 * @filename: pointer to file to be created
 * @text_content: pointer to content to be written
 * Return: -1 if NULL or fails 
 * 	1 if complete
 * 
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1 || w == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
		int w = write(fd, text_content, strlen(text_content));
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
