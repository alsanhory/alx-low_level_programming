#include "main.h"
#include<stdio.h>
/**
 * reverse_array - the entry for the program
 * @a: pointer to variable
 * @n: staring point for the array
 * Return: the number of len on sucess
 */
void reverse_array(int *a, int n)
{
	int firstpoint = 0;
	int theend = n - 1;
	int tmpswap;

	while (firstpoint < theend)
	{
		tmpswap = a[firstpoint];
		a[firstpoint] = a[theend];
		a[theend] = tmpswap;
		firstpoint++;
		theend--;
	}
}
