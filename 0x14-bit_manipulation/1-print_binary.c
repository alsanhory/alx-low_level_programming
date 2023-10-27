#include "main.h"
/**
 * print_binary - function to convert from binary to dec
 * @n: the character of binary
 * Return: the result
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
