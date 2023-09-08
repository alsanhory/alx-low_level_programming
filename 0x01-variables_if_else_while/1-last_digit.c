#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main entry for the program
 * check if the number is positive or negitive
 * Return: 0 on sucess
 */
int main(void)
{
	int n;
	int lastdigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigi = n % 10;
	if (lastdigi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigi);
	}
	else if (lastdigi < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigi);
	}
	else if (lastdigi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigi);
	}
	return (0);
}
