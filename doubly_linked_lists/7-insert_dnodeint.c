#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: Pointer to dlistint_t pointer
 * @idx: Index
 * @n: Number
 *
 * Return: Pointer to dlistint_t struct
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *tmp;
	unsigned int counter = 1;

	while (counter != idx)
	{
		ptr = ptr->next;
		counter++;
	}
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	if (ptr->next != NULL)
	{
		ptr->next->prev = tmp;
		tmp->next = ptr->next;
		tmp->prev = ptr;
		ptr->next = tmp;
	} else
	{
		tmp->next = NULL;
		tmp->prev = ptr;
		ptr->next = tmp;
	}
	tmp->n = n;
	return (*h);
}
