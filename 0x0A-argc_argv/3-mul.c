#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Argument count
 * @argv: Arguments array
 * Return: The result of the multiplication
 * or error
 */
int main(int argc, char *argv[])
{
	int arg1 = 0;
	int arg2 = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	printf("%d\n", arg1 * arg2);
	return (0);
}
