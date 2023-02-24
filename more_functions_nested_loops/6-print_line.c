#include "main.h"
/**
 * print_line - prints a line
 * @n: indicates the size of the line
 *
 * Return: Always void
 **/
void print_line(int n)
{
	int m = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	} else
	{
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
		_putchar('\n');
	}
}
