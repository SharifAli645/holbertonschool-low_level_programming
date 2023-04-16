#ifndef ONE_H
#define ONE_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);
void closer_fd(int close_1, int fd_1, int close_2, int fd_2);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
