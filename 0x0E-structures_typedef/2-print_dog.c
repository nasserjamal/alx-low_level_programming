#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
if (d != NULL)
{
d->name != NULL ? printf("Name: \"%s\"\n", d->name): printf("Name: (nil)\n");
d->age == d->age ? printf("Name: \"%f\"\n", d->age): printf("Name: (nil)\n");
d->owner != NULL ? printf("Name: \"%s\"\n", d->owner): printf("Name: (nil)\n");
}
}