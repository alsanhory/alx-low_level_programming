#include "main.h"
/**
 * clear_bit - function to convert from binary to dec
 * @n: the character of binary
 * @index: the given index
 * Return: the result
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	if (*n & 1L << index)
	{
		*n ^= 1L << index;
	}
	return (1);
}
