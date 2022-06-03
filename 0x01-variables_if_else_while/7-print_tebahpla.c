#include <stdio.h>

/**
 * main - the entry point
 *
 * Return: 0 always success
 */
int main(void)
{
	int i = 122;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
