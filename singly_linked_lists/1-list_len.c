#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 * @h: list
 *
 * Return: numbers of nodes
 **/
size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (1)
	{
		if (h == NULL)
			return (cnt);
		h = h->next;
		cnt++;
	}
}
