#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: decimal number
 * @index: index
 *
 * Return: the bit of the index
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int msk = 1 << index;

	if (index >= 64)
		return (-1);

	if (n & msk)
		return (1);
	else
		return (0);
}
