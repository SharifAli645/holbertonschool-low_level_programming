#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: Always void
 **/
void puts_half(char *str)
{
	char *ri = str;
	char *le;
	int counter = 0;
	int n;

	while (*ri != '\0')
	{
		counter++;
		ri++;
	}
	n = (counter - 1) / 2;
	le = &str[counter];
	ri = &str[n];

	while (ri < le)
	{
		ri++;
		_putchar(*ri);
	}

	_putchar('\n');
}
