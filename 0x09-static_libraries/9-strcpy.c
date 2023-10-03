#include "main.h"
#include<stdio.h>
/**
 * *_strcpy - the entry for the program
 * @dest: pointer to variable
 * @src: staring point for the array
 * Return: the number of len on sucess
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
