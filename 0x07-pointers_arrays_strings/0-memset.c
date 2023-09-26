#include "main.h"
#include<stdio.h>
/**
 * _memset - the entry for the program
 * @s: pointer to variable
 * @b: staring point for the array
 * @n: number to be filled
 * Return: the number of len on sucess
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
