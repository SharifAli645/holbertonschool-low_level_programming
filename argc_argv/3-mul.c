#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of commands
 * @argv: array of commands
 *
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	argv++;

	for (i = 1; i < argc; i++)
	{
		mul = _atoi(*argv) * mul;
		argv++;
	}
	printf("%d", mul);
	return (0);
}
