#include<stdio.h>
/**
 * main - the entry of the program
 * Return: 0 always
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
