#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: Argument counts
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
