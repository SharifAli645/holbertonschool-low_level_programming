#include <stdio.h>
/**
 * main - main function
 * @argc: number of commands
 * @argv: array of commands
 *
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", *argv);

	return (0);
}
