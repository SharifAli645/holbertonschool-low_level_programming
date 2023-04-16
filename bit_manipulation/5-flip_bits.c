#include "main.h"
/**
 * flip_bits -  function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: number
 * @m: number
 *
 * Return: number of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int tmp;

	while (n > 0 || m > 0)
	{
		tmp = ((n ^ m) & 1);
		if (tmp == 1)
			cnt++;
		m = m >> 1;
		n = n >> 1;
	}
	return (cnt);
}
