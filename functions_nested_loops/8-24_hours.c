#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - write from 0 to 24
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	for (int hora = 0; hora < 24; hora++)
	{
		for (int minuto = 0; minuto < 60; minuto++)
		{
			printf("%d:%d", hora, minuto);
			printf("\n");
		}
	}
}
