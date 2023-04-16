#include "lists.h"
/**
 * counter - function that compare the index and a string
 * @h: list
 * @idx: index
 *
 * Return: 1 if the index is greater than the list
 **/
int counter(dlistint_t *h, int idx)
{
	int cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	if (idx >= cnt)
		return (1);
	else
		return (0);
}
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
	dlistint_t *ptr;
	dlistint_t *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = tmp->next;
	ptr->prev = tmp;
	tmp->next->prev = ptr;
	tmp->next = ptr;

	return (ptr);
}
