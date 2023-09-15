#include "main.h"
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * positive_or_negative - the main entry for the program
 * @i: check if the number is positive or negitive
 * Return: 0 on sucess
 */
void positive_or_negative(int i)
{
	int n = i;

	srand(time(0));
	/* n = rand() - RAND_MAX / 2; */
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	/*return (0);*/
}
