#include "main.h"

/**
 * get_bit - Get the bit object at an index
 *
 * @n: The value
 * @index: Index of the bit
 * Return: (int) The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
return ((n >> index) & 1);
}
