#include "lists.h"
/**
 * add_nodeint_end - the function to print list
 * @head: the pointer to
 * @n: the number
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *cnode;

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
	{
		*head = nnode;
	}
	else
	{
		cnode = *head;
		while (cnode->next != NULL)
		{
			cnode = cnode->next;
		}
		cnode->next = nnode;
	}

	return (nnode);
}
