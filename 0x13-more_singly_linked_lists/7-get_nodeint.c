#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node
 * @index: index of the node to return
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
