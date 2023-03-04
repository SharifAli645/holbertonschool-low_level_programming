#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: source string
 * @c: character to find
 *
 * Return: A pointer to the first occurrence of the character c, or NULL
 **/
char *_strchr(char *s, char c)
{
	char *ptr_s;

	ptr_s = s;

	while (*ptr_s != '\0')
	{
		if (*ptr_s == c)
		{
			return (ptr_s);
		}
		ptr_s++;
	}

	if (*ptr_s == '\0')
		return (ptr_s);

	return (NULL);
}
