#include "lists.h"
/**
 * free_listint - the function to print list
 * @head: the pointer to
 * Return: number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *cnode;

	while (head != NULL)
	{
		cnode = head;
		head = head->next;
		free(cnode);
	}
}
