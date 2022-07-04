#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the pointer dog
 * @d: pointer to the dog
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->owner);
	free(d->name);
	free(d);
}
}
