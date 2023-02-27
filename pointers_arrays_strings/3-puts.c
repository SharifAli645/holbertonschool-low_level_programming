#include "main.h"
/**
 * _puts - prints the string
 * @str: the string to print
 *
 * Return: Always void
 **/
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
