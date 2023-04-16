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
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	} else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
		ptr->next->prev = ptr;
	}
	return (*head);
}
