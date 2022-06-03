#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: return success
 */
int main(void)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
