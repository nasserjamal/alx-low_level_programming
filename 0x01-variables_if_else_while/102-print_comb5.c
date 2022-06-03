#include <stdio.h>

/**
 * main - this is the entry blablabla
 *
 * Return: return a 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i == k && j == l)
					{
					}
					else
					{
						if (i <= k && j <= l)
						{
							putchar(i+48);
							putchar(j+48);
							putchar(' ');
							putchar(k+48);
							putchar(l+48);
						if (i == 9 && j == 8 && k == 9 && l == 9 )
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
	}
	putchar('\n');
	return (0);
}
