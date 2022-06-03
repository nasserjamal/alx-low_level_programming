#include <stdio.h>

/**
 * main - thisis the entry
 *
 * Return: return success always
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
				}
				else{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
