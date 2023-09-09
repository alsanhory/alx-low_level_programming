#include<stdio.h>
/**
 * main - the main entery of the program
 * Return: 0 on sucess
 */
int main(void)
{
	int c;
	int i;

	for (c = 0; c < 9; c++)
	{
		i = c + 1;

		while (i <= 9)
		{
			putchar(c + '0');
			putchar(i + '0');
			if (c != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
	}
	putchar('\n');
	return (0);
}
