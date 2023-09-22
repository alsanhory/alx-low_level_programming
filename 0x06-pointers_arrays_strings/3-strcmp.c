#include "main.h"
#include<stdio.h>
/**
 * _strcmp - the entry for the program
 * @s1: pointer to variable
 * @s2: staring point for the array
 * Return: the number of len on sucess
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
