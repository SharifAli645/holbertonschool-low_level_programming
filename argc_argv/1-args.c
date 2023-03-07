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
	int i;
	int counter = 0;

	for (i = 0; i < argc; i++)
	{
		argv++;
		counter++;
	}
	printf("%d\n", counter - 1);

	return (0);
}
