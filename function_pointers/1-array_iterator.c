#include <stddef.h>
/**
 * array_iterator -  function that executes a function given
 * as a parameter on each element of an array.
 * @size: size of the array
 * @action: pointer to function
 * @array: array
 * Return: Always void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
