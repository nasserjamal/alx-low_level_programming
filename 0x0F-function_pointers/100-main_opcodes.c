#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry to the program
 * @argc: No of arguments
 * @argv: Argumnetarrays
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int noOfBytes, i;
	int (*address)(int, char **);
	unsigned char opcode;

address = main;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	noOfBytes = atoi(argv[1]);

	if (noOfBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < noOfBytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == noOfBytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
