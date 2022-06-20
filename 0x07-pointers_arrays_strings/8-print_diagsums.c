#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: the array
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i + (i * size));
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = size - 1; i >= 0; i--)
	{
		sum += *(a + i + (j * size));
		j++;
	}
	printf("%d\n", sum);
}
