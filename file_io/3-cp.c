#include "main.h"
/**
 * closer_fd - function that closes FD
 * @close_1: indicator
 * @close_2: indicator
 * @fd_1: FD
 * @fd_2: FD
 *
 * Return: Always void
 **/
void closer_fd(int close_1, int fd_1, int close_2, int fd_2)
{
	if (close_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	if (close_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
}
/**
 * main - main function
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0
 **/
int main(int ac, char *av[])
{
	int fd, c_fd;
	char buffer[1024];
	int n1 = 1024;
	int n2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	c_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (c_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (n1 == 1024)
	{
		n1 = read(fd, buffer, 1024);
		if (n1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		n2 = write(c_fd, buffer, n1);
		if (n2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	closer_fd(close(fd), fd, close(c_fd), c_fd);
	return (0);
}
