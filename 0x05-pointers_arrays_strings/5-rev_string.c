#include "main.h"
#include<stdio.h>
/**
 * rev_string - the entry for the program
 * @s: pointer to variable to change
 * Return: the number of len on sucess
 */
void rev_string(char *s)
{
	int len = 0, i;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
