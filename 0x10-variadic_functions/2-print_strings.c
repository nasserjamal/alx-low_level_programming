#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed
 * @separator: The separating char
 * @n: No of args passed
 * @...: Unnamed args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *tempString;

va_start(args, n);
for (i = 0; i < n; i++)
{
	tempString = va_arg(args, char*);
	if (tempString == NULL)
		printf("(nil)");
	else
		printf("%s", tempString);
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(args);
}
