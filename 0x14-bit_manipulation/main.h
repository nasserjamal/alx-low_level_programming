#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct power_properties - Power properties
 * @value: the value
 * @power: The power
 * Description: Not available
 */
typedef struct power_properties
{
unsigned long int value;
int power;
} pwrProp;

long int power(int base, unsigned int pow);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
pwrProp getMaxPower(int value);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
