#include "main.h"
/**
 * _strcpy - function that copies one source string to a array
 * @dest: empty array
 * @src: source string
 *
 * Return: One array
 **/
char *_strcpy(char *dest, char *src)
{
	char *ptr_src = src;
	char *ptr_dest = dest;

	while (*ptr_src != '\0')
	{
		*ptr_dest = *ptr_src;

		ptr_src++;
		ptr_dest++;
	}
	*ptr_dest = '\0';

	return (dest);

}
