#include<stdio.h>
/**
 * print_numbers - function to print numbers
 * Return: the result always
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
}
