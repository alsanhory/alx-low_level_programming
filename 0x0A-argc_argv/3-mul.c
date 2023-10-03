#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - the main function
 * @argc: the arugments count
 * @argv: the vector array
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res = res * atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);
	}
}
