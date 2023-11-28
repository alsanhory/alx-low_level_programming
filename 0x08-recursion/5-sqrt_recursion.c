#include "main.h"
#include<stdio.h>
/**
 * _sqrt_recursion - the entry for the program
 * @n: number
 * Return: the number of len on sucess
 */
int _sqrt_recursion(int n)
{
	int firstck, secondck;

	if (n == 1 || n == 0)
	{
		return (n);
	}
	firstck = n / 2;
	if (firstck * firstck == n)
	{
		return (firstck);
	}
	if (firstck * firstck > n)
	{
		return (_sqrt_recursion(n / 2));
	}
	secondck = _sqrt_recursion(n - 1);
	if (secondck * secondck == n)
	{
		return (secondck);
	}
	return (-1);
}
