#include "main.h"
/**
 * _strncat - function that concatenates two strings for byte
 * @dest: source string
 * @src: destination string
 * @n: size of bytes
 *
 * Return: always a string
 **/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr;
	char *src_ptr;
	int i;
	int size = n;
	int counter = 0;
	int size_src = 0;

	dest_ptr = dest;
	src_ptr = src;

	for (i = 0; *dest_ptr != '\0'; i++)
	{
		dest_ptr++;
	}

	while (*src_ptr != '\0')
	{
		size_src++;
		src_ptr++;
	}

	if (size > size_src)
		size = size_src;

	src_ptr = src;

	while (counter < size)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		counter++;
	}
	return (dest);
}
