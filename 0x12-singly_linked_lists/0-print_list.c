#include "lists.h"

/**
 * print_list - prints elements in linked list
 * @h: head of linked list
 * Return: number of elementsof list
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%lu] %s\n", h->len, "(nil)");
		}
		else
		{
		printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, "(nil)");
	return (i);
}
