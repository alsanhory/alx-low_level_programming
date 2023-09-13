#include<stdio.h>
/**
 * print_sign - function to check if character is minus or pls
 * @n: the character to check
 * Return: 0 always
 */
int print_sign(int n)
{
	if (n  < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
