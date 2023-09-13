#include<stdio.h>
/**
 * _isalpha - function to check if character is alpha
 * @c: the character to check
 * Return: 0 always
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
