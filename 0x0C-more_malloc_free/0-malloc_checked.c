#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - the main function
 * @b: the arugments count
 * Return: 0 on sucess
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c != NULL)
	{
		return (c);
	}
	else
	{
		c = malloc(1);
		*((unsigned char*)c) = 98;
		return (c);
	}

}
