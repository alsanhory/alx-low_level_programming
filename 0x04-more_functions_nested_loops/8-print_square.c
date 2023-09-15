#include<stdio.h>
/**
 * print_square - function to print sequre
 * @size: print to given number
 * Return: the result always
 */
void print_square(int size)
{
	int c, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (c = 1; c <= size; c++)
	{
		for (j = 1; j <= size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
