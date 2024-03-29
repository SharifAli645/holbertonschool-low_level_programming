#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search -  function that searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value, or -1 if there is not
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
