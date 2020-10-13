#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - alloc_grid
 * @width: int
 * @height: int
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(height * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0 ; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
