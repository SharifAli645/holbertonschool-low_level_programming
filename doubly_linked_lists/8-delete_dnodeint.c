#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a node at index of a list
 * @head: Pointer to dlistint_t pointer
 * @index: Index
 *
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next == NULL)
			return (-1);
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (cnt < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		cnt++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	free(tmp);
	return (1);
}
