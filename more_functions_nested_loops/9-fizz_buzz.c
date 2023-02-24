#include "main.h"
#include <stdio.h>
/**
 * main - print Fizz Buzz
 *
 * Return: Always void
 **/
void main(void)
{
	int i = 1;

	while (i < 102)
	{
		if (i == 101)
		{
			printf("\n");
			return;
		}
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

	}
}
