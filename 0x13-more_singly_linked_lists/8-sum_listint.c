#include "lists.h"
/**
 * sum_listint - the function to print list
 * @head: the pointer to
 * Return: number of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
