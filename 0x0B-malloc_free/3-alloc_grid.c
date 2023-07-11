#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **mal;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mal = malloc(sizeof(int *) * height);

	if (mal == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mal[x] = malloc(sizeof(int) * width);

		if (mal[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mal[x]);

			free(mal);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mal[x][y] = 0;
	}

	return (mal);
}
