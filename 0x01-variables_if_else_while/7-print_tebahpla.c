#include<stdio.h>
/**
 * main - the main entry for the program
 * Return: 0 on sucess
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
