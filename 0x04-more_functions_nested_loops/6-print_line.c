#include<stdio.h>
/**
 * print_line - function to print lines
 * @n: print to given number
 * Return: the result always
 */
void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		putchar('_');
	}
	putchar('\n');
}
