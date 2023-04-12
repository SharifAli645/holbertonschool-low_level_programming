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
 * add_node - function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to list_t pointer
 * @str: a string
 *
 * Return: the new node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		if ((*head)->str == NULL)
		{
			free(*head);
			return(NULL);
		}
		(*head)->len = counter_string(str);
		(*head)->next = NULL;
	} else
	{
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
			return (NULL);
		ptr->str = strdup(str);
		if (ptr->str == NULL)
		{
			free(ptr);
			return (*head);
		}
		ptr->len = counter_string(str);
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
