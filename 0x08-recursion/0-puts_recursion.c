#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion - the entry for the program
 * @s: number of char byte to be copied
 * Return: the number of len on sucess
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
