#include<stdio.h>
/**
 * print_most_numbers - function to print numbers
 * Return: the result always
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			putchar(c + '0');
		}
	}
	putchar('\n');
}
