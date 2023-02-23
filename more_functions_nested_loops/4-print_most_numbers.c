#include "main.h"
/**
 * print_most_numbers - prints from 0 to 9 (not 2 and 4)
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a == 50 || a == 52)
		{
			a++;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
