#include<stdio.h>
/**
 * times_table - to make addition
 * Return: the result of sum
 */
void times_table(void)
{
	int i;
	int j;

	for(i = 0; i <= 9; i++)
	{
		for (j =0; j <= 9; j++)
		{
			res = i * j;
			puthcar(res + '0');
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
