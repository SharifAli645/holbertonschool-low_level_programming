#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer
 *
 * Return: Always a void
 **/
void _puts_recursion(char *s)
{
	char *ptr = s;

	if (*ptr == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*ptr);
	ptr++;
	_puts_recursion(ptr);
}
