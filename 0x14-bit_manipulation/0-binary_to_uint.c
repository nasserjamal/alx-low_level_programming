#include "main.h"

/**
 * binary_to_uint - Converts binary tounsigned int
 * @b: String containing binary
 * Return: (unsigned int) value of binary
 */
unsigned int binary_to_uint(const char *b)
{
int len = 0;
unsigned int ans = 0;

if (b == NULL)
	return (0);
for (len = 0; b[len] != '\0'; len++)
{
	if (b[len] != '0' && b[len] != '1')
		return (0);
}
while (*b)
{
	if (*b == '1')
		ans += power(2, (len - 1));
	b++;
	len--;
}
return (ans);
}


/**
 * power - Finds power of a number
 * @base: Base power
 * @pow: Power index
 * Return: (int) the value
 */
int power(int base, int pow)
{
int ans = 1;

while (pow)
{
	ans = ans * base;
	pow--;
}
return (ans);
}
