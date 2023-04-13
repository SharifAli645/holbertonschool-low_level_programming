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
 * delete_dnodeint_at_index - function that deletes a node at index of a list
 * @head: Pointer to dlistint_t pointer
 * @index: Index
 *
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *tmp = *head;
	unsigned int end = 0;
	unsigned int e = 0;

	if (ptr == NULL)
		return (-1);
	if (*head != NULL)
	{
		if (counter(*head, index))
			return (-1);
		while (end != index)
		{
			tmp = tmp->next;
			end++;
		}
		while (e != index)
		{
			ptr = ptr->next;
			e++;
		}
	}
	if (index == 0)
	{
		ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
	} else
	{
		ptr->prev->next = ptr->next;
		if (end != e)
			ptr->next->prev = ptr->prev;
		free(ptr);
	}
	return (1);
}
