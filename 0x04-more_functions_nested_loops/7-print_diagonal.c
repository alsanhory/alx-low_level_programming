#include<stdio.h>
/**
 * print_diagonal - function to print lines
 * @n: print to given number
 * Return: the result always
 */
void print_diagonal(int n)
{
	int c, j;

	if(n <= 0)
	{
		putchar('\n');
		return;
	}
	for (c = 1; c <= n; c++)
	{
		for (j = 1; j < c; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
