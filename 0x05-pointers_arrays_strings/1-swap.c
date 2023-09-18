#include "main.h"
#include<stdio.h>
/**
 * swap_int - the entry for the program
 * @a: pointer to variable to change
 * @b: second varabiel to change
 * Return: 0 on sucess
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
