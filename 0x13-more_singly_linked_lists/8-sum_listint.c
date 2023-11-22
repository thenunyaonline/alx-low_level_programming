#include "lists.h"

/**
 * sum_listint - calculates sum of all the data in list
 * @head: first node
 * Return: sum
 */

int sum_listint(listint_t *head)

{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
