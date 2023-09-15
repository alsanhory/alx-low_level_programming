#include<stdio.h>
/**
 * more_numbers - function to print numbers
 * Return: the result always
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				putchar(c / 10 + '0');
				putchar(c % 10 + '0');
			}
			else
			{
				putchar(c + '0');
			}
		}
		putchar('\n');
	}
}
