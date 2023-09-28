#include "main.h"
#include<stdio.h>
/**
 * _strlen_recursion - the entry for the program
 * @s: number of char byte to be copied
 * Return: the number of len on sucess
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
