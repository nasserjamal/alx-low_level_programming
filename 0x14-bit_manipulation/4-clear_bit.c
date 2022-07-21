#include "main.h"

/**
 * clear_bit - Sets bit at index to 0
 * @n: The value
 * @index: The index to be converted
 * Return: (int) 1 if success or 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if (n == NULL)
return (-1);
*n = (*n & ((*n | ~*n) ^ (1 << index)));
return (1);
}
