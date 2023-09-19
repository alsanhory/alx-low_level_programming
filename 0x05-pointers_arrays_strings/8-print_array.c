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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
