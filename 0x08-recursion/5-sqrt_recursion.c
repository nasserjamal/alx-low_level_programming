#include "main.h"
/**
 * getSqrt - Checks for the sqrt of the number
 * @no: The number being checked
 * @i: The current rrot being tested
 * Return: Thesqrt
 */
int getSqrt(int no, int i)
{
	if ((i * i) == no)
		return (i);
	if ((no / 2) == i)
		return (-1);
	return (getSqrt(no, i + 1));
}
/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *  @n: The no
 *  Return: thesqrt
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n <= 0)
		return (-1);
	return (getSqrt(n, i));
}
