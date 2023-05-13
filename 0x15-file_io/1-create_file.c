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

int create_file(const char *filename, char *text_content){
    int fd;
    int len;
    int w;
    if (filename)
        return (-1);
    if (text_content)
                return (1);
    while (len = 0; text_content[len];)
            len++;

    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    k = write(fd, text_content, len);
    if (fd == -1)
                return (-1);
        if (k == -1)
        return (-1);
    close(fd);

    return (1);

}                                        
