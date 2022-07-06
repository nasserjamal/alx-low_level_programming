#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry to the program
 * @argc: No of arguments
 * @argv: Array of arguments
 * Return: 0 if successfull
 * 98 if no of arguments is invalid
 * 99 if invalid operand
 * 100 if division by 0
 */
int main(int argc, char *argv[])
{
int (*op_func)(int, int);
int num1, num2;

if (argc != 4)
{
	printf("Error\n");
	return (98);
}
op_func = get_op_func(argv[2]);
if (op_func == NULL)
{
	printf("Error\n");
	return (99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
	printf("Error\n");
	return (100);
}
	printf("%d\n", op_func(num1, num2));
	return (0);
}
