#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: the matrix
 * @size: the size of matrix
 *
 * Return: Always void
 **/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if (i == size - j - 1)
			{
				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
