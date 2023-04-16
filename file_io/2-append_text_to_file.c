#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: content
 *
 * Return: 1 on success and -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int cnt = 0;
	char *ptr = text_content;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	while (*ptr != '\0')
	{
		cnt++;
		ptr++;
	}
	fd = open(filename, O_WRONLY | O_APPEND | O_TRUNC);
	if (fd == -1)
		return (-1);
	write(fd, text_content, cnt);
	close(fd);
	return (1);
}
