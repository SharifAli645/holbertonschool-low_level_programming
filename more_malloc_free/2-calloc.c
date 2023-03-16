#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: elements
 * @size: size
 *
 * Return: A pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int siz;
	int counter = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	siz = nmemb * size;
	ptr = malloc(siz);
	if (ptr == NULL)
		return (NULL);

	while (counter < siz)
	{
		ptr[counter] = '\0';
		counter++;
	}
	return (ptr);
}
