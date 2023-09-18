#include "main.h"
#include<stdio.h>
/**
 * puts2 - the entry for the program
 * @str: pointer to variable to change
 * Return: the number of len on sucess
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
