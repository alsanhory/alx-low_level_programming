#include<stdio.h>
/**
 * _isdigit - function to check if character is digit
 * @c: the character to check
 * Return: 0 always
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
