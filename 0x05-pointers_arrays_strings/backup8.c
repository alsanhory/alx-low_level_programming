#include "main.h"
#include<stdio.h>
/**
 * print_array - the entry for the program
 * @a: pointer to variable 
 * @n: staring point for the array
 * Return: the number of len on sucess
 */
void print_array(int *a, int n)
{
	int size,i;

	size= sizeof(a) / sizeof(a[0]);

	for (i = n; i < size; i++)
	{
		printf("%d ,", a[i]);
	}
	putchar('\n');
}
