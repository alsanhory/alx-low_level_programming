#include "lists.h"
/**
 * get_nodeint_at_index - the function to print list
 * @head: the pointer to
 * @index: the index to look
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
