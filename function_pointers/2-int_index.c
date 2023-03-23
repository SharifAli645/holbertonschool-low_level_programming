#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @size: size
 * @cmp: pointer to function
 * @array: array
 *
 * Return: the index where the value matches
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int tmp;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		tmp = cmp(array[i]);
		if (tmp != 0)
			return (i);
	}
	return (-1);
}
