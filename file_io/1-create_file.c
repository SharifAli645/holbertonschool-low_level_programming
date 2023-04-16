#include "main.h"
/**
 * create_file -  function that creates a file
 * @filename: file name
 * @text_content: content
 *
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int cnt = 0;
	char *ptr = text_content;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);
	while (*ptr == '\0')
	{
		ptr++;
		cnt++;
	}

	write(fd, text_content, cnt);
	close(fd);
	return (1);
}
