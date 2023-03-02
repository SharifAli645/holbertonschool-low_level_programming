#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 *
 * Return: Always void
 **/
void puts2(char *str)
{
	char *ptr_r;
	char *ptr_l;
	int counter = 0;

	ptr_l = str;
	ptr_r = str;

	while (*ptr_r != '\0')
	{
		ptr_r++;
		counter++;
	}

	ptr_r = &str[counter - 1];

	while (ptr_l <= ptr_r)
	{
		_putchar(*ptr_l);
		ptr_l = ptr_l + 2;
	}
	_putchar(10);

}
