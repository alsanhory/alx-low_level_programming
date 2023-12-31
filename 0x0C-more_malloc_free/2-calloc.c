#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - the main function
 * @nmemb: the arugments count
 * @size: the size
 * Return: 0 on sucess
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)p + i) = 0;
	}
	return (p);
}
