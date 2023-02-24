#include "main.h"
#include <stdio.h>
/**
 * main - print Fizz Buzz
 *
 * Return: Always 0 void
 **/
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
			i++;
		} else if ((i % 5) == 0)
		{
			printf("Buzz ");
			i++;
		} else if ((i % 3) == 0)
		{
			printf("Fizz ");
			i++;
		} else
		{
			printf("%d ", i);
			i++;
		}

		if (i == 100)
		{
			printf("Buzz");
			printf("\n");
			i++;
		}

	}
	return (0);
}
