#include "main.h"
/**
 * times_table - write the table of the nine
 *
 * Return: Always void
 */
void times_table(void)
{
	int i = 0;
	int e = 0;
	int res;

	while (i < 10)
	{
		while (e < 10)
		{
			res = (i * e);
			_putchar(res + '0');
			_putchar(',');
			_putchar(' ');
			e = e + 1;
		}
		i = i + 1;
		_putchar(10);
	}
	return;
}
