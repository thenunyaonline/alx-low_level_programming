#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to the first node
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (n < index - 1)
	{
		if (temp == NULL || (temp->next) == NULL)
			return (-1);
		temp = temp->next;
		n++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
