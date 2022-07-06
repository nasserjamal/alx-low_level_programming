#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: Array to be searched
 * @size: Size ofthe array
 * @cmp: Pointer to the call back function
 * @return: Index of array if cmp !=0 else 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
return (-1);
}
