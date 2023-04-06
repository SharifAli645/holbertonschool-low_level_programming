#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a list
 * @head: pointer to dlistint_t pointer
 * @n: number
 *
 * Return: the new node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

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
		ptr = malloc(sizeof(dlistint_t));
		if (ptr == NULL)
			return (NULL);
		ptr->n = n;
		ptr->prev = NULL;
		(*head)->prev = ptr;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
