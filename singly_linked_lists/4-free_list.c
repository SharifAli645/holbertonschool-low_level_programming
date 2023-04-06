#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: a pointer to list_T struct
 *
 * Return: Always void
 **/
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *tmp = head;

	while (head != NULL)
	{
		if (tmp->next != NULL)
		{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		}
		while (ptr->next != NULL)
			ptr = ptr->next;
		if (ptr == tmp)
		{
			free(ptr->str);
			free(ptr);
			if (tmp != ptr)
				tmp->next = NULL;
		} else
		{
			free(ptr->str);
			free(ptr);
			tmp->next = NULL;
		}
		tmp = head;
		if (head == ptr)
			head = NULL;
		ptr = head;
	}
}
