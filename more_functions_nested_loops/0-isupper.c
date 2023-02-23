#include "main.h"
/**
 * _isupper - evaluates if the input is uppercase
 * @c: the input
 * Return: If it's uppercase 1, if no 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
