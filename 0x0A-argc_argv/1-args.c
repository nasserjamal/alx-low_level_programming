#include <stdio.h>

/**
 * main - Prints no of arguments passed
 * @argc: No of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
