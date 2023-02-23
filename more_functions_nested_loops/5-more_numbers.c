#include "main.h"
/**
 * more_numbers - prints from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (c < 10)
	{
		if (a == 10)
		{
			a = 0;
			b = 1;
			while (a < 5)
			{
				_putchar(b + '0');
				_putchar(a + '0');
				a++;
			}
			_putchar('\n');
			a = 0;
			b = 0;
			c++;

		} else if (b == 0)
		{
			_putchar(a + '0');
			a++;
		}
	}
}
