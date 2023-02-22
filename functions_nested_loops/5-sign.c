#include "main.h"
/**
 * print_sign - evaluates a number
 * @n: The character to evaluate
 *
 * Return: 0, 1 or -1 if they're positive or negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
