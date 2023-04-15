#include "main.h"
/**
 * read_textfile - functino that reads and prints a text file
 * @filename: file name
 * @letters: number of letters to print
 *
 * Return: printed letters
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t real_letters;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	real_letters = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, real_letters);
	close(fd);
	return (real_letters);
}
