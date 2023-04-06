#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a list
 * @head: pointer to dlistint_t pointer
 * @n: number
 *
 * Return: the address of the new element
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
	} else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = malloc(sizeof(dlistint_t));
		if (ptr->next == NULL)
			return (NULL);
		ptr->next->n = n;
		ptr->next->prev = ptr;
		ptr->next->next = NULL;
	}
	return (*head);
}
