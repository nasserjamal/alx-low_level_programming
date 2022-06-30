#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Sie of the memory allocated
 * Return: pointer to the memory allocated
 * or a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *memAllocated = malloc(b);

	if (memAllocated == NULL)
		exit(98);
	return (memAllocated);
}
