#include<stdio.h>
/**
 * print_alphabet  - the function to print alphapets
 * Return: 0 always
 */
int print_alphabet(void)
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
