#include "main.h"

/**
 * read_textfile - read a text file and prints it
 *
 * @filename: a pointer to the file to be a read
 *
 * @letters: numbers of letters printed
 *
 * Return: number of letters it read and printed otherwise return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t fd;
	ssize_t r;
	ssize_t w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	        return (0);
		
	
	a = malloc(sizeof(char) * (letters));

	if (!a)
		return (0);
	
	r = read(fd, a, letters);
	w = write(STDOUT_FILENO, a, r);

	free(a);
	close(fd);
	return (w);

}
