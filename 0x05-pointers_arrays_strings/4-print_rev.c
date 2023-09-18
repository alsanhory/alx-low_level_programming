#include "main.h"
#include<stdio.h>
/**
 * print_rev - the entry for the program
 * @str: pointer to variable to change
 * Return: the number of len on sucess
 */
void print_rev(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		putchar(str[len-1]);
		len--;
	}
	putchar('\n');
}
