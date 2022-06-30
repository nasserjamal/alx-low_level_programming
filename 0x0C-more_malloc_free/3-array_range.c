#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: The smallest value in the array
 * @max: The larget value of the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
