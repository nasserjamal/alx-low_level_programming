#include "main.h"

/**
 * set_bit - Sets the bit to 1 at index
 *
 * @n: The value
 * @index: Index of bit to be converted
 * Return: (int) 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL)
return (-1);
*n = (*n | 1 >> index);
return (1);
}
