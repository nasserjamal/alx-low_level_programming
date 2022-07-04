#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints dog attributes
 * @d: Pointer to dog struct
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
d->name != NULL ? printf("Name: \"%s\"\n", d->name) : printf("Name: (nil)\n");
d->age >= 0 ? printf("Age: \"%f\"\n", d->age) : printf("Age: (nil)\n");
d->owner != NULL ? printf("Owner: \"%s\"\n", d->owner) :
printf("Owner: (nil)\n");
}
}
