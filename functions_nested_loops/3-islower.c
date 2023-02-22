#include "main.h"
/**
 * _islower - write 0 or 1
 * @c: The character to evaluate
 *
 * Return: 0 if isn't lowercase.
 * 1 If is lowercase.
 **/
int _islower(int c)
{
	while (c < 96 && c > 123)
	{
		return (0);
	}
	while (c > 96 && c < 123)
	{
		return (1);
	}
	return (2);

}
