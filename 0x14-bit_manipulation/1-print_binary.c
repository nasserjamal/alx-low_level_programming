#include "main.h"

/**
 * print_binary - Converts int to binary
 * @n: No to be converted
 */
void print_binary(unsigned long int n)
{
pwrProp powers = {1, 0};
powers = getMaxPower(n);
for (; powers.power >= 0; powers.power--)
{
	powers.value = power(2, powers.power);
	if (n >= powers.value)
{
		n -= powers.value;
	_putchar('1');
	}
else
		_putchar('0');
	}
}

/**
 * getMaxPower - Get the max power that can be subtracted
 *and still get a positive value
 * @value: Value being checked
 * Return: (int) Max power
 */
pwrProp getMaxPower(int value)
{
pwrProp maxP = {1, 0};
int i = 0;
for (i = 0; power(2, i) <= value; i++)
{
	maxP.value = power(2, i);
	maxP.power = i;
}
return (maxP);
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
