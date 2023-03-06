#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: initial pointer
 *
 * Return: Always void
 **/
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		char *ptr = s;
		char i;

		s++;
		i = *s;

		_print_rev_recursion(s);
		_putchar(i);
		_putchar(*ptr);
	} else if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
