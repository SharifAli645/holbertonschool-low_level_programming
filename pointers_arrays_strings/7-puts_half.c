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
	int counter = 0;
	int n;

	while (*ri != '\0')
	{
		counter++;
		ri++;
	}
	n = (counter - 1) / 2;
	ri = &str[n];

	while (*ri != '\0')
	{
		ri++;
		_putchar(*ri);
	}

	_putchar('\n');


}
