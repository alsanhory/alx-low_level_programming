#include "main.h"
#include<stdio.h>
/**
 * *string_toupper - the entry for the program
 * @s1: pointer to variable
 * @s2: staring point for the array
 * Return: the number of len on sucess
 */
char *string_toupper(char *)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
