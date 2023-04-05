#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked list
 * @h: list
 *
 * Return: the number of elements in a linked list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
