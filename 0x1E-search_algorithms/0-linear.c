#include "search_algos.h"

/**
 * linear_search - Performs a linear search
 * @array: Pointer to the first num
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
