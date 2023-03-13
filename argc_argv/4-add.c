#include <stdio.h>
#include <stdlib.h>
/**
 * atoii - function that converts a string to a integer
 * @str: source string
 *
 * Return: a integer or 0 if tha string contains letters
 **/
int atoii(char *str)
{
	int result = 0;
	int sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
		} else
		{
			return (-1);
		}
		str++;
	}
	return (sign * result);
}
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
	int val = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	} else if (argc > 1)
	{
		argv++;
		for (i = 1; i < argc; i++)
		{
			val = atoii(*argv);
			if (val == -1)
			{
				printf("Error\n");
				return (1);
			}
			sum = val + sum;
			argv++;
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
