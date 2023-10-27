#include "main.h"
/**
 * set_bit - function to convert from binary to dec
 * @n: the character of binary
 * @index: the given index
 * Return: the result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
