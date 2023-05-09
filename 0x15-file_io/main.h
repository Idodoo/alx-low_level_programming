#ifndef MAIN_H
#define MAIN_H
/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t_read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_file(int file_from, int file_to, char *argv[]);
void print_addr(char *ptr);
int _purchar(char c);
#endif