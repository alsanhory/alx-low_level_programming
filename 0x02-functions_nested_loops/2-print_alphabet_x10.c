#include<stdio.h>
/**
 * print_alphabet_x10  - the function to print alphapets
 * Return: 0 always
 */
int print_alphabet_x10(void)
{
	char alpha,i;
	for (i=0; i<10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
	return (0);
}
