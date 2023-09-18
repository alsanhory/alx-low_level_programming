#include "main.h"
#include<stdio.h>
/**
 * puts_half - the entry for the program
 * @str: pointer to variable to change
 * Return: the number of len on sucess
 */
void puts_half(char *str)
{
	int len = 0, i, starting;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		starting = len / 2;
	}
	else
	{
		starting = ((len - 1) / 2) + 1;
	}
	for (i = starting; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
