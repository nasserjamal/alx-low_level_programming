#include <stdio.h>

/**
 * main - the entry point to the program
 *
 * Return: return success
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i == j && j == k)
				{
				}
				else
				{
					if (k >= j && j >= i && k != j && j != i)
					{
						putchar(i);
						putchar(j);
						putchar(k);
					if (i == 55 && j == 56 && k == 57)
						{
						}
					else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
