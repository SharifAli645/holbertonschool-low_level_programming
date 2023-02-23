#include "main.h"
/**
 * _isdigit - evaluates if the input is a digit
 * @c: the input
 * Return: If it's a digit 1, if no 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
