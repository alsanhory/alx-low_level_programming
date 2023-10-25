#include "lists.h"
/**
 * insert_nodeint_at_index - the function to print list
 * @head: the pointer to
 * @idx: index
 * @n: number
 * Return: number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *curnode;
	unsigned int i;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	curnode = *head;
	for (i = 0; i < idx - 1 && curnode != NULL; i++)
	{
		curnode = curnode->next;
	}
	if (curnode == NULL)
	{
		free(nnode);
		return (NULL);
	}

	nnode->next = curnode->next;
	curnode->next = nnode;

	return (nnode);
}
