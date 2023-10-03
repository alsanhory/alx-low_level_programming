#include<stdio.h>
/**
 * _islower - function to check if character is lowercase
 * @c: the character to check
 * Return: 0 always
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
