#include "lists.h"
/**
 * counter_string - function that counts a string
 * @str: string
 *
 * Return: the size of the string
 **/
int counter_string(const char *str)
{
	int cnt = 0;

	while (*str)
	{
		str++;
		cnt++;
	}
	return (cnt);
}
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: list
 * @str: string
 *
 * Return: the address of the new element
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		if ((*head)->str == NULL)
		{
			free(*head);
			return (*head);
		}
		(*head)->len = counter_string(str);
		(*head)->next = NULL;
	} else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = malloc(sizeof(list_t));
		if (ptr->next == NULL)
			return (NULL);
		ptr->next->str = strdup(str);
		if (ptr->next->str == NULL)
		{
			free(ptr->next);
			return (*head);
		}
		ptr->next->len = counter_string(str);
		ptr->next->next = NULL;
	}
	return (*head);
}
