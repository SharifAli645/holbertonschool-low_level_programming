#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints a numeric interval
 * @n: the interval starts here
 *
 * Return: Always 0 (void)
 **/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", n);
		printf("\n");
		return;
	} else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
		printf("\n");
		return;
	}
	printf("%d\n", n);
}
