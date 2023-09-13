#include<stdio.h>
/**
 * print_to_98 - function to check if character is minus or pls
 * @n: the character to check
 * Return: 0 always
 */
int print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (i=n; i >= 98; i--)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
