#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: source string
 * @src: destination string
 * @n: size of bytes
 *
 * Return: always a string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr;
	char *src_ptr;
	int i;
	int size = n;
	int counter = 0;
	int size_dest = 0;

	dest_ptr = dest;
	src_ptr = src;

	for (i = 0; *dest_ptr != '\0'; i++)
	{
		dest_ptr++;
		size_dest++;
	}

	dest_ptr = dest;

	if (size > size_dest)
		size = size_dest;

	while (counter < size)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		counter++;
	}

	return (dest);
}
