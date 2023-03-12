#include "main.h"
/**
 * prime - functions that finds a prime number
 * @n: number to evaluate
 * @div: divisor
 *
 * Return: 1 if the number is prime, if not 0
 **/
int prime(int n, int div)
{
	if (div > n / 2)
	{
		return (1);
	}
	if (n % div == 0)
		return (0);
	else
		return (prime(n, div + 1));
}
/**
 * is_prime_number - function that calls the recursive function
 * @n: number to evaluate
 *
 * Return: 1 if the number is prime, 0 if not
 **/

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, div));
}
