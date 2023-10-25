#include "lists.h"
/**
 * pop_listint - the function to print list
 * @head: the pointer to
 * Return: number of nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nod;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = tmp->next;
	nod = tmp->n;
	free(tmp);
	return (nod);
}
