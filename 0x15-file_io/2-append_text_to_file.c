#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: this the name of the file
 * @text_content: the NULL terminated string
 * Return: 1 if the file exists.
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len, w;

    if(!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return (-1);

    if(text_content){
        for (len = 0; text_content[len]; len++);

        w = write(fd, text_content, len);
        if (w == -1)
            return (-1);
    }

    close(fd);
    
    return (1);
}
