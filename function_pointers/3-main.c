#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * 
 * Return: Always void
 **/
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *s = argv[2];
	int (*c)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' || *s == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);


	c = get_op_func(s);
	printf("%d\n", c(a, b));

	return (0);
}
