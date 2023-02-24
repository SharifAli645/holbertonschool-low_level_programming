#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: indicates the size of the diagonal
 *
 * Return: Always void
 **/
void print_diagonal(int n)
{
	int e = 0;
	int a = 0;
	int m = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	} else if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	} else
	{
		while (a < n)
		{

			while (e < m)
			{
				_putchar(' ');
				;
				e++;
			}
			m++;
			e = 0;
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
}
