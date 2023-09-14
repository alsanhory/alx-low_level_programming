#include<stdio.h>
/**
 * _isupper - function to check if character is uppercase
 * @c: the character to check
 * Return: 0 always
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
