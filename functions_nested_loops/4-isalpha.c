#include "main.h"
/**
 * _islower - write 0 or 1
 * @c: The character to evaluate
 *
 * Return: 0 if isn't a letter.
 * 1 If is a letter.
 **/
int _isalpha(int c)
{
	while ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	while ((c < 64 || c > 91) || (c < 96 || c > 123))
	{
		return (0);
	}
	return (2);

}
