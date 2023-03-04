#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: bytes copied
 *
 * Return: Always a pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest;
	char *ptr_src;
	int size = n;
	int counter = 0;

	ptr_dest = dest;
	ptr_src = src;

	while (counter < size)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		counter++;
	}
	return (dest);
}
