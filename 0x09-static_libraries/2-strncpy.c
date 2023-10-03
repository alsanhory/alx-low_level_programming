#include "main.h"
#include<stdio.h>
/**
 * _strncpy - the entry for the program
 * @dest: pointer to variable
 * @src: staring point for the array
 * @n: number of char byte to be copied
 * Return: the number of len on sucess
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
