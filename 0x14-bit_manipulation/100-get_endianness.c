#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ec = (char *)&num;

	return (*ec);
}
