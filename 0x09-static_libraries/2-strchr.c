#include "main.h"
#include<stdio.h>
/**
 * _strchr - the entry for the program
 * @s: pointer to variable
 * @c: staring point for the array
 * Return: the number of len on sucess
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
