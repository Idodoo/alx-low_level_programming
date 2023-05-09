#include "main.h"
/**
 * read_textfile - read a text file and prints it
 * @filename: a pointer to the file to be a read
 * @letters: numbers of letters printed
 * Return: number of letters it read and printed otherwise return 0.
 */
ssize_t_read_textfile(const char *filename, size_t letters){
    int fs;
    char *a;
    size_t r,w;
    if(filename == NULL)
        return (0);
    a = malloc(sizeof(char) * letters);
    if(a == NULL)
        return (0);
    fs = open(filename, O_RDONLY);
    if (fs == -1)
        return (0);
    r = read(fs, a, letters);
    w = write(STDOUT_FILENO, b, r);
    close(fs);
    free(a);
    return(w);

}
