#include "main.h"
#include<stdio.h>
/**
 * _print_rev_recursion - the entry for the program
 * @s: number of char byte to be copied
 * Return: the number of len on sucess
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
