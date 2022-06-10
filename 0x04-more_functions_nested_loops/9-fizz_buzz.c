#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point to the program
 * Return: Always 0 Success
 */

int main(void)
{
	int a = 1;

	while (a <= 100; a++)
	{
		if (a % 3 == '0')
			printf("Fizz ");
		else if (a % 5 == '0')
			printf("Buzz ");
		else if (a % 3 == '0' && a % 5 == '0')
			printf("FizzBuzz ");
		else
			printf("%d ", a);
	}
	return (0);
}
