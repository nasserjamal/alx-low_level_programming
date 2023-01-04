#include "search_algos.h"

/**
 * binary_search - Performs a linear search
 * @array: Pointer to the first num
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid_point = (size - 1) / 2;

	if (array == NULL)
		return (-1);
	print_array(array, 0, size);
	if (array[mid_point] == value)
		return (mid_point);
	if (array[mid_point] > value)
		return (binary_sub_search(array, 0, mid_point, value));
	else
		return (binary_sub_search(array, mid_point + 1, size, value));

}

/**
 * binary_sub_search - search a section of an array.
 *
 * @array: The array to search for
 * @start: The begining of the array
 * @end: The end point of the array
 * @value: The value to search for
 *
 * Return: The index
*/
int binary_sub_search(int *array, size_t start, size_t end, int value)
{
	size_t mid_point = (start + end - 1) / 2;

	print_array(array, start, end);
	if (array[mid_point] == value)
		return (mid_point);
	if (start >= end - 2)
	{
		print_array(array, start + 1, end);
		if (array[start + 1] == value)
			return (start + 1);
		else
			return (-1);
	}
	if (array[mid_point] > value)
		return (binary_sub_search(array, start, mid_point, value));
	else
		return (binary_sub_search(array, mid_point + 1, end, value));
}

/**
 * print_array - Prints the array
 *
 * @array: The array to print
 * @start: Start of the array to print
 * @end: The end of the array
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i = 0;

	printf("Searching in array:");
	for (i = start; i < end; i++)
	{
		printf(" %d", array[i]);
		if (i < end - 1)
			printf(",");
	}
	printf("\n");
}
