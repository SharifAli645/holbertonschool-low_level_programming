#include "main.h"
/**
 * reverse_array - function that reverses an integer array
 * @a: integer array
 * @n: size of array
 *
 * Return: Always void
 **/
void reverse_array(int *a, int n)
{
	int *l_ptr;
	int *r_ptr;
	int temp;

	l_ptr = a;
	r_ptr = &a[n - 1];

	while (l_ptr != r_ptr)
	{
		temp = *l_ptr;
		*l_ptr = *r_ptr;
		*r_ptr = temp;
		l_ptr++;
		r_ptr--;
	}

}
