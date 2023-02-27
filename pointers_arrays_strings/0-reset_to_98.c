#include "main.h"
/**
 * reset_to_98 - changes a value throug the pointer
 * @n: memory value
 *
 * Return: Always void
 **/
void reset_to_98(int *n)
{
	int *p = n;
	*p = 98;
}
