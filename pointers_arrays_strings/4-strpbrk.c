#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: source string
 * @accept: bytes to compare
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 **/
char *_strpbrk(char *s, char *accept)
{
	char *ptr_s;
	char *ptr_a;

	ptr_s = s;
	ptr_a = accept;

	while (*ptr_s != '\0')
	{
		while (*ptr_a != '\0')
		{
			if (*ptr_a == *ptr_s)
			{
				return (ptr_s);
			}
			ptr_a++;
		}
		ptr_s++;
		ptr_a = accept;
	}

	return (NULL);
}
