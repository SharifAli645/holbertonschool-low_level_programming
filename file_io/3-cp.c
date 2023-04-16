#include "main.h"
/**
 *
 *
 *
 **/
int main(int ac, char *av[])
{
	int fd, c_fd, cs_fd, cs_c_fd;
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
		if(n2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	cs_fd = close(fd);
	cs_c_fd = close(c_fd);
	if (cs_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (cs_c_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_fd);
		exit(100);
	}
	return (0);
}
