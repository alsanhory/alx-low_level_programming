#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
/**
 * main - the main function
 * @argc: the arugments count
 * @argv: the vector array
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]) && (argv[i][j] != '-' || j != 0))
				{
					printf("Error\n");
					return (1);
				}
			}
		}

		for (i = 1; i < argc; i++)
		{
			res = res + atoi(argv[i]);
		}

		printf("%d\n", res);
		return (0);
	}
}
