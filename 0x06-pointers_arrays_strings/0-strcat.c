#include "main.h"
#include<stdio.h>
/**
 * _strcat - the entry for the program
 * @dest: pointer to variable
 * @src: staring point for the array
 * Return: the number of len on sucess
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = src[i];
	return (dest);
}
