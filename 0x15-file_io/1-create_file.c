#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: pointer filename
 *
 * @text_content: content written in file.
 *
 * Return: -1 otherwise, 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++);

	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}                                      
