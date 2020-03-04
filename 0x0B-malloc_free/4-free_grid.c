#include "holberton.h"

/**
 * free_grid - put other points
 * @grid: the address of memory to print
 * @height: the size of the memory to print
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
