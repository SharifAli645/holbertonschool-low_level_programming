#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth node of a list
 * @head: Pointer to dlistint_t struct
 * @index: Index
 *
 * Return: A node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *tmp = head;

	while(tmp)
	{
		tmp = tmp->next;
		counter++;
	}
	if(index > counter)
		return (NULL);
	counter = 0;
	tmp = head;

	while (index != counter)
	{
		tmp = tmp->next;
		counter++;
	}
	return (tmp);
}
