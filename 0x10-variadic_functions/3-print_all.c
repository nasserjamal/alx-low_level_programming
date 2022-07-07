#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * charStructures - Structure holding symbol and func
 * @symbol: var type
 * @print: Function
 */
typedef struct charStructures
{
    char *varRep;
    void(*print)(va_list);
}charStructures;


/**
 * print_all - Prints different types variables
 * @format: String of char representing var type
 * @...: Unnamed  arg var to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	charStructures funcs[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].varRep)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

/**
 * printChar - Prints a char.
 * @arg: A list of arguments
 */
void printChar(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * printInt - Prints an int.
 * @arg: A list of arguments
 */
void printInt(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * printFloat - Prints a float.
 * @arg: A list of arguments
 */
void printFloat(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * printString - Prints a string.
 * @arg: A list of arguments pointing to
 */
void printString(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
