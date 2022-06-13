#include "main.h"

/**
 * swap_int - swap the two inetgers
 * @a: The first arg
 * @b: te second arg
 * Return: Returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
