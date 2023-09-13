#include<stdio.h>
/**
 * _abs - function to check if character is minus or pls
 * @n: the character to check
 * Return: 0 always
 */
int _abs(int n)
{
	if (n  < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (+n);
	}
	else
	{
		return (0);
	}
}
