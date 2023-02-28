#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a reverse string
 * @s: input string
 *
 * Return: Always void
 **/
void print_rev(char *s)
{
	int a, b;

	for (a = 0; *s != '\0'; s++)
	{
		a++;
	}
	b = a - 1;
	while (b >= 0)
	{
		s--;
		b--;
		_putchar(*s);
	}
	_putchar(10);
}
