#include "main.h"

/**
 * flip_bits - Calculates no of bits required to flip
 *a number to another
 *
 * @n: First number
 * @m: Second number
 * Return: No of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int c = 0;
unsigned int noFlipped = 0;

c = n ^ m;
while (c > 0)
{
if ((c & 1) == 1)
noFlipped += (c & 1);
c = c >> 1;
}
return (noFlipped);
}
