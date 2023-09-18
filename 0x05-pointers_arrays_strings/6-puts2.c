#include "main.h"
#include<stdio.h>
/**
 * puts2 - the entry for the program
 * @str: pointer to variable to change
 * Return: the number of len on sucess
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len  = len + 2;
	}
	putchar('\n');
}
