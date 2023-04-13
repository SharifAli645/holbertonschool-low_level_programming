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
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	unsigned int end = 0;

	if (ptr == NULL)
		return (NULL);
	if (*h != NULL)
		while (end != idx)
		{
			tmp = tmp->next;
			end++;
		}
	if (idx == 0)
	{
		ptr->n = n;
		ptr->next = *h;
		ptr->prev = NULL;
		(*h)->prev = ptr;
		*h = ptr;
	} else
	{
		ptr->n = n;
		ptr->prev = tmp->prev;
		ptr->next = tmp;
		tmp->prev->next = ptr;
		tmp->prev = ptr;
	}
	return (*h);
}
