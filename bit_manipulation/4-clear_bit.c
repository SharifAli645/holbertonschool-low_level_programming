#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to decimal
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error occurred
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int ms = (1 << index);

	if (index >= 64)
		return (-1);

	*n = (*n & ~ms) | (0 << index);
	return (1);
}
