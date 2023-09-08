#include<stdio.h>
/**
 * main - the main entry for the program
 * Return: 0 on sucess
 */
int main(void)
{
	char c = 'a';
	char c2 = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c2 <= 'Z')
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
