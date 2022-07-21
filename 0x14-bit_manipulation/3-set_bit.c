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
*n = (*n | power(2, index));
return (1);
}

/**
 * power - Finds power of a number
 * @base: Base power
 * @pow: Power index
 * Return: (int) the value
 */
long int power(int base, unsigned int pow)
{
long int ans = 1;
while (pow)
{
	ans = ans * base;
	pow--;
}
return (ans);
}
