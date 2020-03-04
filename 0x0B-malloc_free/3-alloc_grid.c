#include "holberton.h"

/**
 * alloc_grid - put other points
 * @width: the address of memory to print
 * @height: the size of the memory to print
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **arr = malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
