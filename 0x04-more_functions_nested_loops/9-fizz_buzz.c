#include<stdio.h>
/**
 * main - function to print fizzbuz
 * Return: 0 the result always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if((i % 3 == 0) && (i % 5 ==0))
		{
			printf("FizzBuzz");
		} 
		else if (i % 3 == 0)
		{
			printf("Fizz");
		} 
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
