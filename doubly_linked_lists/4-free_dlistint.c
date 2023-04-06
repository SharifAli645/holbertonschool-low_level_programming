#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: pointer to dlistint struct
 *
 * Return: Always void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *tmp;

	while (head != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		tmp = ptr->prev;
		if (tmp == NULL)
		{
			free(ptr);
			return;
		}
		free(tmp->next);
		tmp->next = NULL;
		ptr = head;
	}
}

