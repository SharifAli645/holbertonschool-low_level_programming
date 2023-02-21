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

	while (n < 103)
	{
		putchar(n);
		n = n + 1;

		if (n == 58)
		{
			n = 97;
		}
	}

	putchar(10);
	return (0);
}
