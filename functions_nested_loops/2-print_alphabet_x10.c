#include "2-main.h"
/**
 * print_alphabet_x10 - write ten times the alphabet
 *
 * Return: Always (void)
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int b = 0;

	while (b < 10)
	{
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		b++;
		a = 97;
	}
}
