#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - write the last digit of a number
 * @e: The number to evaluate
 *
 * Return: the last digit
 */

int print_last_digit(int e)
{
	e = e % 10;
	if (e < 0)
	{
		e = e * -1;
	}
	_putchar(e + '0');
	return (e);
}
