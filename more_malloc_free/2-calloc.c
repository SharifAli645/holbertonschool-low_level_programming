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

	siz = nmemb * size;
	ptr = malloc(siz);

	while (counter < siz)
	{
		ptr[counter] = '\0';
		counter++;
	}
	return (ptr);
}
