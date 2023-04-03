#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list
 *
 * Return: numbers of nodes
 **/
size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (1)
	{
		if (h == NULL)
			return (cnt);
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}
}
