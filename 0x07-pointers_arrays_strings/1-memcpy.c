#include "main.h"
#include<stdio.h>
/**
 * _memcpy - the entry for the program
 * @src: pointer to variable
 * @dest: staring point for the array
 * @n: number to be filled
 * Return: the number of len on sucess
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
