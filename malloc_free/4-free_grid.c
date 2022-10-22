#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Short description
 *
 * @grid: first member
 * @height: second member
 * Return: Always 0 (Success)
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

