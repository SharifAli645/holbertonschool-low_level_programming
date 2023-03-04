#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: source string
 * @b: constant byte
 * @n: the first n bytes
 *
 * Return: Always a pointer to the memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr_s;
	int size = n;
	int counter = 0;

	ptr_s = s;

	while (counter < size)
	{
		*ptr_s = b;
		ptr_s++;
		counter++;
	}

	return (s);
}
