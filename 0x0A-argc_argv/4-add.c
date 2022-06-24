#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds several numbers
 * @argc: Argument count
 * @argv: Arguments array
 * Return: The result of the summation
 * or error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int arg;
	int i = 1;
	int len = 0;
	int j = 0;
	char *current;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		current = argv[i];
		len = strlen(current);
		for (j = 0; j < len; j++)
		{
			arg = *(current + j);
			if (!isdigit(arg))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
