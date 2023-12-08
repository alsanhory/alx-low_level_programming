#include "lists.h"

/**
 * dlistint_len - number of elements
 * @h: pointer to the head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodes = 0;

	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}

	return (nodes);
}

