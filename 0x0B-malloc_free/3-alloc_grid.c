#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - entry point
 * @width: columns of the array
 * @height: rows
 * Return: an array
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **) malloc(height * sizeof(int *));
	if (g == NULL)
	{
		free(g);
		return (0);
	}
	for (a = 0; a < height; a++)
	{
		g[a] = (int *) malloc(width * sizeof(int));
		if (g[a] == NULL)
		{
			for (; a >= 0; a--)
				free(g[a]);
			free(g);
			return (0);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			g[b][c] = 0;
		}
	}
	return (g);
}
