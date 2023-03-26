#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_op_func -  function that selects the correct
 * function to perform the operation
 * @s: operator
 *
 * Return: a pointer to the function that corresponds to the operator given
 **/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops + i)
	{
		if (*((ops + i)->op) == *s)
		{
			int (*fun_ptr)(int, int) = *(ops + i)->f;

			return (fun_ptr);
		}
		i++;
	}
	return (NULL);
}
