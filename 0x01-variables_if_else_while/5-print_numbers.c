#include<stdio.h>
/**
 * main - the main entry for the program
 * Return: 0 on sucess
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
