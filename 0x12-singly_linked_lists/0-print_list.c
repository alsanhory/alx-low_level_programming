#include "lists.h"
/**
 * print_list - the function to print list
 * @h: the pointer to
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	char *ll;

	while (h)
	{
		if (h->str)
		{
			ll = h->str;
		}
		else
		{
			ll="(nil)";
		}

		printf("[%lu] %s\n", strlen(h->str), ll); 
		h = h->next;
		i++;
	}
	return (i);
}
