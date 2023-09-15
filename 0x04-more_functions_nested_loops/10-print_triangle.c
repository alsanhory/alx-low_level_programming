#include<stdio.h>
/**
 * print_triangle - function to print traingle
 * @size: print to given number
 * Return: the result always
 */
void print_triangle(int size)
{
	int c, j, i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (c = 1; c <= size; c++)
	{
		for (i = 1; i <= size - c; i++)
		{
			putchar(' ');
		}
		for (j = 1; j <= c; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
