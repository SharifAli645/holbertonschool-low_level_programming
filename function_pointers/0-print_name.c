#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name
 * @f: pointer to function
 *
 * Return: Always void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
