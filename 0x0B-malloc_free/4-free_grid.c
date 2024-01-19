#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid created by alloc_grid
 * @grid: pointer to the 2-dimensional array
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{       
        int i = 0;

        while (i < height)
        {       
                free(grid[i]);
                i++;
        }
	free(grid);
} 
