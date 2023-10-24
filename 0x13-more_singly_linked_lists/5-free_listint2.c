#include "lists.h"
/**
 * free_listint2 - the function to print list
 * @head: the pointer to
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *cnode;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		cnode = *head;
		*head = (*head)->next;
		free(cnode);
	}
}
