#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a part of one string
 * @a: the array
 * @n: the specific size
 *
 * Return: Always void
 **/
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont <= (n - 1); a++)
	{

		if (cont != (n - 1))
		{
			printf("%d, ", *a);
		} else
		{
			printf("%d", *a);
		}
		cont++;

	}
	printf("%c", '\n');
}
