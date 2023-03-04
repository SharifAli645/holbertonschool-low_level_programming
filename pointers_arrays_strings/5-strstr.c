#include "main.h"
#include <stddef.h>
/**
 * _strstr -  function that locates a substring
 * @haystack: base string
 * @needle: substring to find
 *
 * Return: a pointer to the beginning of the located substring
 **/
char *_strstr(char *haystack, char *needle)
{
	char *ptr_h;
	char *ptr_n;
	char *ptr_r;
	int size_n = 0;
	int counter = 0;

	ptr_h = haystack;
	ptr_n = needle;
	ptr_r = ptr_h;

	while (*ptr_n != '\0')
	{
		size_n++;
		ptr_n++;
	}
	ptr_n = needle;
	while (*ptr_h != '\0')
	{
		while (*ptr_r == *ptr_n)
		{
			counter++;
			if (counter == size_n)
				return (ptr_h);
			ptr_r++;
			ptr_n++;
		}
		ptr_n = needle;
		ptr_h++;
		ptr_r = ptr_h;
	}
	return (NULL);
}
