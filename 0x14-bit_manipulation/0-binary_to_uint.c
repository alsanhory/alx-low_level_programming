#include "main.h"
/**
 * binary_to_uint - function to convert from binary to dec
 * @b: the character of binary
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	res = strtoul(b, NULL, 2);
	return (res);
}
