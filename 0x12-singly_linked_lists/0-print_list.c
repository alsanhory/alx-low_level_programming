#include "lists.h"
/**
 * sl - to handle the length and the 0
 * @s: string to pass
 * Return: sucess
 */
int sl(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * print_list - the function to print list
 * @h: the pointer to
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", sl(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
