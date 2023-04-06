#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a list
 * @head: pointer to dlistint_t struct
 *
 * Return: the sum of node's data
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int acum = 0;

	if (ptr == NULL)
		return (0);
	while (ptr)
	{
		acum = acum + ptr->n;
		ptr = ptr->next;
	}
	return (acum);
}
