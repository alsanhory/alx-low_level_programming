#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node
 * @head: pp to head
 * @str: string to be duplicated
 * Return: the address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->str = strdup(str);

	if (nnode->str == NULL)
	{
		free(nnode);
		return (NULL);
	}

	nnode->len = strlen(str);
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = nnode;

	return (nnode);
}

