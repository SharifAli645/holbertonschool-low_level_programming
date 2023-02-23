#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the table of nine
 *
 * Return: Always nothing
 **/
void times_table(void)
{
	int i = 0;
	int e = 0;

	while (i < 10)
	{
		while (e < 10)
		{
			int r = i * e;

			if (e == 0)
			{
				printf("%d,", r);
			}
			else if (e < 9)
			{
				printf("%3d,", r);
			} else
			{
				printf("%3d", r);
			}
			e++;
		}
		printf("\n");
		i++;
		e = 0;
	}
}
