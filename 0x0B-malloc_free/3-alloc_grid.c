#include <stdlib.h>

/**
 * alloc_grid - "A pointer to a 2 dimensional array of integers"
 * @width: "integer"
 * @height: "integer"
 * Return: "two dimensional array"
 */
int **alloc_grid(int width, int height)
{
	int **arr, x, y, z;

	arr = malloc(sizeof(*arr) * height);

	if (width == 0 || height == 0 || arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			arr[x] = malloc(sizeof(**arr) * width);
			if (arr[x] == 0)
			{
				for (z = 0; z < x; x++)
				{
					free(arr[x]);
				}
				free(arr);
				return (NULL);
			}
			for (y = 0; y < width; y++)
			{
				arr[x][y] = 0;
			}
		}
	}
	return (arr);
}
