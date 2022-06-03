#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: always success
 */
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
