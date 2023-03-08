#include <stdio.h>
#include <stdlib.h>
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
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	} else if (argc > 1)
	{
		argv++;
		for (i = 1; i < argc; i++)
		{
			sum = atoi(*argv) + sum;
			argv++;
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
