#include "main.h"
/**
 * _ver - function the natural square root
 * @base: number to evaluate
 * @r: the root
 * Return: the root, or -1 if it not have
 **/

int _ver(int base, int r)
{
	int rr = r;
	int sqrt = r * r;

	if (base == sqrt)
	{
		return (rr);
	} else if (sqrt > base)
	{
		--rr;
		return (_ver(base, rr));
	}
	return (-1);
}
/**
 * _sqrt_recursion - function the natural square root
 * @n: the number to operate
 *
 * Return: the square root of a number or -1
 **/

int _sqrt_recursion(int n)
{
	int number = n / 2;
	int sqrt;

	if (n == 1)
		return (1);

	sqrt = _ver(n, number);

	return (sqrt);
}
