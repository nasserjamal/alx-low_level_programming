#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array.
 * @array: Array of numbers
 * @size: Size of the array
 * @action: Pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (action == NULL || array == NULL)
return;
for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
