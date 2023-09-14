#include<stdio.h>
/**
 * more_numbers - function to print numbers
 * Return: the result always
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				putchar((c/10) + '0');
				c %= 10;
			}

			putchar(c + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}
