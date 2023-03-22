#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed
 * @n: number of arguments
 *
 * Return: Always void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i == 0 && i == (n - 1))
			printf("%d", va_arg(ptr, int));
		else if (i == n - 1)
			printf("%d", va_arg(ptr, int));
		else
			printf("%d%s", va_arg(ptr, int), separator);
	}
	va_end(ptr);
	printf("\n");
}
