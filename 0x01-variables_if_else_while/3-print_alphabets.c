#include <stdio.h>

/**
 * main - this is the entrypoint
 *
 * Return: return a 0
 */
int main(void)
{
	int i=65;

	for(i=65;i<=90;i++)
	{
		putchar(i);
	}
	for(i=97;i<=122;i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}