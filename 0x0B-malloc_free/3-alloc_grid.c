#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - a nested loop we shall use to generate our grid
 *@height: height of our grid
 *@width: width of our grid
 *Return: a pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **zzz;

	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	zzz = malloc(sizeof(int *) * height);

	if (zzz == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		zzz[a] = malloc(sizeof(int) * width);
		if (zzz[a] == NULL)
		{
			for (; a >= 0; a--)
				free(zzz[a]);

			free(zzz);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			zzz[a][b] = 0;
	}
	return (zzz);
}
