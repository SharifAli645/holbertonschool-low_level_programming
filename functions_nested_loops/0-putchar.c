#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (void)
 */

int _putchar(char c);

int main(void)
{
	printf("_putchar\n");
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
