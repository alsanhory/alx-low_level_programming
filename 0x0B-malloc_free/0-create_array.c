#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * create_array - function to check if character is uppercase
 * @size: the character to check
 * @c: the character
 * Return: 0 always
 */
char *create_array(unsigned int size, char c)
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
