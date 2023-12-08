#include "lists.h"

/**
 * sum_dlistint - sum of all
 * @head: pointer
 * Return: sum of all
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

