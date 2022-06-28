#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: Width
 * @height: Height of the array
 * Return: a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **tempArray;
	int indexHeight, indexWidth;

	if (width <= 0 || height <= 0)
		return (NULL);


	tempArray = malloc(sizeof(int *) * height);

	if (tempArray == NULL)
		return (NULL);

	for (indexHeight = 0; indexHeight < height; indexHeight++)
	{
		tempArray[indexHeight] = malloc(sizeof(int) * width);

		if (tempArray[indexHeight] == NULL)
		{
			for (; indexHeight >= 0; indexHeight--)
				free(tempArray[indexHeight]);

			free(tempArray);
			return (NULL);
		}
	}

	for (indexHeight = 0; indexHeight < height; indexHeight++)
	{
		for (indexWidth = 0; indexWidth < width; indexWidth++)
			tempArray[indexHeight][indexWidth] = 0;
	}

	return (tempArray);
}
