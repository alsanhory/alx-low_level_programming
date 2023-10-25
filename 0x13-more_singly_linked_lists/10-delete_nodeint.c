#include "lists.h"
/**
 * delete_nodeint_at_index - the function to print list
 * @head: the pointer to
 * @index: the index
 * Return: number of nodes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *tmp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	cur = *head;
	for (i = 0; i < index - 1 && cur != NULL; i++)
	{
		cur = cur->next;
	}
	if (cur == NULL || cur->next == NULL)
	{
		return (-1);
	}
	tmp = cur->next;
	cur->next = tmp->next;
	free(tmp);
	return (1);
}
