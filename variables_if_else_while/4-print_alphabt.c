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

	n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			n = n + 1;
		}

		putchar(n);
		n = n + 1;
	}

	putchar(10);
	return (0);
}
