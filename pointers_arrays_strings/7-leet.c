#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @arr: source atring
 *
 * Return: Always the modified string
 **/
char *leet(char *arr)
{
	char *ptr;
	char *lt_mi = {"aeotl"};
	char *lt_ma = {"AEOTL"};
	char *num = {"43071"};

	char *ptr_mi = lt_mi;
	char *ptr_ma = lt_ma;
	char *ptr_num = num;

	ptr = arr;

	while (*ptr != '\0')
	{
		while (*ptr_mi != '\0')
		{
			if (*ptr == *ptr_mi || *ptr == *ptr_ma)
			{
				*ptr = *ptr_num;

			}
			ptr_mi++;
			ptr_ma++;
			ptr_num++;

		}
		ptr_mi = lt_mi;
		ptr_ma = lt_ma;
		ptr_num = num;

		ptr++;
	}

	return (arr);
}
