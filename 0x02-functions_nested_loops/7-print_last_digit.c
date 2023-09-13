#include<stdio.h>
/**
 * print_last_digit - function to check if character is minus or pls
 * @n: the character to check
 * Return: 0 always
 */
int print_last_digit(int n)
{
	int thelast = n % 10;

	if (thelast < 0)
	{
		putchar(-thelast + '0');
		return (-thelast);
	}
	else
	{
		putchar(thelast + '0');
		return (thelast);
	}
}
