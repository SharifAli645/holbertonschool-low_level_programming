#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: number of arguments
 *
 * Return: Always void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *tmp;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ptr, char*);
		if (tmp == NULL)
			tmp = "(nil)";
		if (i == 0 && i == (n - 1))
			printf("%s", tmp);
		else if (i == n - 1)
			printf("%s", tmp);
		else
			printf("%s%s", tmp, separator);
	}
	va_end(ptr);
	printf("\n");
}
