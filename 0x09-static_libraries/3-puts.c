#include "main.h"
#include<stdio.h>
/**
 * _puts - the entry for the program
 * @str: pointer to variable to change
 * Return: the number of len on sucess
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}
