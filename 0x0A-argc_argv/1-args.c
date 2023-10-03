#include<stdio.h>
#include "main.h"
/**
 * main - the main function
 * @argc: the arugments count
 * @argv: the vector array
 * Return: 0 on sucess
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
