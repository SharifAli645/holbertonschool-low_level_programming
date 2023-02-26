#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: Always void
 **/
void print_triangle(int size)
{
	int a = 0;
	int sizeE = size-1;
	int e = 0;
	int sizeM = 1;
	int m = 0;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (a < size)
		{
			while (e < sizeE)
			{
				_putchar('.');
				e++;
			}
			e = 0;
			sizeE--;
			while (m < sizeM)
			{
				_putchar('#');
				m++;
			}
			m = 0;
			sizeM++;
			_putchar('\n');
			a++;
		}
	}
}
