#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 * @width: Width/rows of the 2D array
 * @height: Height/columns of the 2D array
 * Return: Pointer to a 2 dimenstional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, f, **alloc;

	if (width <= 0 || height <= 0)
		return ('\0');
	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
	{
		free(alloc);
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);
		if (alloc[i] == NULL)
		{
			for (f = i; f >= 0; f--)
				free(alloc[f]);
			free(alloc);
			return ('\0');
		}
		for (j = 0; j < width; j++)
			alloc[i][j] = 0;
	}
	return (alloc);
}
