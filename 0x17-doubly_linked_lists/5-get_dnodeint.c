#include "lists.h"

/**
 * get_dnodeint_at_index - node of a dlistint_t
 * @head: pointer
 * @index: The index of the node
 * Return: node of a dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}

