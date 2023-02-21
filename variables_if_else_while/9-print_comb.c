#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (void)
 */
int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		putchar(n);
		putchar(',');
		putchar(32);
		n = n + 1;
	}

	putchar(10);
	return (0);
}
