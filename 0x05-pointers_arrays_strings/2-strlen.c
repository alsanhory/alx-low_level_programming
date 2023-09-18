#include "main.h"
#include<stdio.h>
/**
 * _strlen - the entry for the program
 * @s: pointer to variable to change
 * Return: the number of len on sucess
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
