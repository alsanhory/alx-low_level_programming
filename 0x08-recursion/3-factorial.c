#include "main.h"
#include<stdio.h>
/**
 * factorial - the entry for the program
 * @n: number of char byte to be copied
 * Return: the number of len on sucess
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
