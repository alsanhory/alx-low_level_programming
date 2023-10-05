#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * strdup - function to check if character is uppercase
 * @str: the character to check
 * Return: 0 always
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
