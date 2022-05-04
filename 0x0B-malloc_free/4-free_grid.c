#include <stdlib.h>

/**
 * free_grid - "Free the grid"
 * @grid: "grid of memories"
 * @height: "integer"
 * Return: "void"
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
	}
	free(grid);
}
