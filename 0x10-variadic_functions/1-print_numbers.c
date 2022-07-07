#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers passed as args
 * @separator: Separator between the numbers
 * @n: No of args passed
 * @...: List of unamed args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(args, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(args);
}
