#include "main.h"
/**
 * print_square - draws a square
 * @size: the size of the square
 *
 * Return: Always void
 **/
void print_square(int size)
{
	int c = 0;
	int r = 0;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
	while (r < size)
	{
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		c = 0;
		r++;
	}
	}
}
