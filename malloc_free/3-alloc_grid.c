#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Short description
 *
 * @width: first member
 * @height: second member
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
int i;
int **grid;

if (width < 1)
{
return (0);
}

if (height < 1)
{
return (0);
}

grid = malloc(height * sizeof(int *));

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
}

if (grid == NULL)
{
return (NULL);
}

free(grid);
return (grid);
}

