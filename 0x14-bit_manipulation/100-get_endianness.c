#include "main.h"
/**
 * get_endianness - Get the endianness of pc
 *
 * Return: 0 if big endian or 1 otherwise
 */
int get_endianness(void)
{
unsigned long int a = 0x41FFFF42;
char *b = (void*)&a;
if (b[0] == 'A')
return (0);
else
return (1);
}
