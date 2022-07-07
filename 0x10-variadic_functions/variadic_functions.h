#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * charStructures - Structure holding symbol and func
 * @symbol: var type
 * @print: Function
 */
typedef struct charStructures
{
char *varRep;
void (*print)(va_list);
} charStructures;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void printChar(va_list arg);
void printInt(va_list arg);
void printFloat(va_list arg);
void printString(va_list arg);
void print_all(const char * const format, ...);

#endif
