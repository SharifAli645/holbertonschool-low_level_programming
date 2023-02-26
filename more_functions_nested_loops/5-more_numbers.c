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
		a = 0;

		while (a < 10)
		{
			_putchar(a + '0');
			a++;

			if (a == 10 || b == 1)
			{
				if (a == 10)
				{
					a = 0;
				}
				b = 1;

				if (a == 5)
				{
					a = 10;
				}
				if (a != 4)
				{
					_putchar(b + '0');
				}
			}
		}
		b = 0;
		c++;
		_putchar('\n');
	}
}
