#include <stdio.h>

/**
 * main - thisis the entry
 *
 * Return: return success always
 */
int main(void)
{
	int i = j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 8 && j != 9)
				{
					putchar(',');
					putchar(" ");
				}
			}
		}
	}
	putchar("\n");
	return (0);
}
