#include<stdio.h>
/**
 * main - the main entery of the program
 * Return: 0 on sucess
 */
int main(void)
{
	int c;
	int i;
	int j;
	int k;
	for (c = 0; c < 9; c++)
	{
		i = c + 1;

		while (i <= 9)
		{
			j = i + 1;
			k = 0;
			while (k < 99)
			{
				if (k < 10)
				{
					putchar('0');
				}
				putchar(k + '0');
				k++;
			}
			while (j <= 9)
			{
				putchar(c + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (j != 9 || c != 7 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
	}
	putchar('\n');
	return (0);
}
