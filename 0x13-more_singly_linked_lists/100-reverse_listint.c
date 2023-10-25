#include "lists.h"
/**
 * reverse_listint - the function to print list
 * @head: the pointer to
 * Return: number of nodes
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt = NULL;
	listint_t  *prev = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
