#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - write from 0 to 24
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hora1 = 0;
	int hora2 = 0;
	int minuto1 = 0;
	int minuto2 = 0;

	while (hora1 < 3)
	{
		while (hora2 < 10)
		{
			while (minuto1 < 6)
			{
				while (minuto2 < 10)
				{
					if (hora1 == 2 && hora2 == 4 && minuto1 == 0 && minuto2 == 0)
					{
						return;
					}
					printf("%d%d:%d%d", hora1, hora2, minuto1, minuto2);
					minuto2++;
					printf("\n");
				}
				minuto2 = 0;
				minuto1++;
			}
			minuto1 = 0;
			hora2++;
		}
		hora2 = 0;
		hora1++;
	}
}
