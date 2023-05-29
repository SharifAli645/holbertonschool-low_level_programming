#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value, or -1 if there is not
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, i;
	int mid;

	while (start <= end && array)
	{
		i = start;

		printf("Searching in array: ");
		while (i < end)
			printf("%d, ", array[i++]);
		printf("%d\n", array[i]);

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
