#include "lists.h"
/**
 * add_nodeint - the function to print list
 * @head: the pointer to
 * @n: the number
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->n = n;
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
