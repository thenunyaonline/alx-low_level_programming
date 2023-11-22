#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: pointer
 * Return: 1 or 0
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
