#include<stdio.h>
/**
 * main - the main entry for the program
 * Return: 0 on sucess
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
