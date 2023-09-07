#include<stdio.h>
/**
 * main - the main entery for the program
 * print message to screen
 * Return: 1 on error
 */
int main(void)
{
	char mes[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", mes);
	return (1);
}
