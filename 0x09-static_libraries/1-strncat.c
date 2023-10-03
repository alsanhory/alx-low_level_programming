#include "main.h"
#include<stdio.h>
/**
 * _strncat - the entry for the program
 * @dest: pointer to variable
 * @src: staring point for the array
 * @n: number of char byte to be copied
 * Return: the number of len on sucess
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
