#include "main.h"
/**
 * swap_int - interchanges two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Always void
 **/
void swap_int(int *a, int *b)
{
	int *f = a;
	int *s = b;
	int t = 0;

	t = *f;

	*f = *s;
	*s = t;
}
