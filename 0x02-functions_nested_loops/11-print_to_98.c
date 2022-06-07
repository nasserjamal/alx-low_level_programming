#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: the argument
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int op = 1;

	if (n > 98)
		op = -1;
	while (n != 98)
	{
		printf("%d, ", n);
		n += op;
	}
	printf("98\n");
}
