#include "main.h"
/**
 * flip_bits - function to convert from binary to dec
 * @n: the character of binary
 * @m: the given index
 * Return: the result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int diff;

	diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff >>= 1;
	}

	return (count);
}
