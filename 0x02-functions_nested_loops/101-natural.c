#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Return: true
 */
int main(void)
{
	int i = 0;
	int z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
