#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: source string
 * @src: destination string
 *
 * Return: always a string
 **/
char *_strcat(char *dest, char *src)
{
	char *dest_ptr;
	char *src_ptr;
	int i;

	dest_ptr = dest;
	src_ptr = src;

	for (i = 0; *dest_ptr != '\0'; i++)
	{
		dest_ptr++;
	}

	for (i = 0; *src_ptr != '\0'; i++)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}

	*dest_ptr = '\0';

	return (dest);
}
