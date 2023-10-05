#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * free_grid - function to check if character is uppercase
 * @grid: the character to check
 * @height: the height to be free
 * Return: 0 always
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
