#include "main.h"
/**
 * _pow_recursion -  function that returns the value
 * @x: the base number
 * @y: the power
 *
 * Return: a value raised to y
 **/
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	} else if (y < 0)
	{
		return (-1);
	}
	return (1);
}
