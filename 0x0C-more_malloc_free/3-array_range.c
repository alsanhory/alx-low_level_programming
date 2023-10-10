#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - the main function
 * @min: the arugments count
 * @max: the size
 * Return: 0 on sucess
 */
int *array_range(int min, int max)
{
	int *ary;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ary = malloc(sizeof(int) * size);
	if (ary == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ary[i] = min;
		min++;
	}
	return (ary);
}
