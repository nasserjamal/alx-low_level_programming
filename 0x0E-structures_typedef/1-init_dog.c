#include "dog.h"
/**
 * init_dog - Initializes dog struct
 * @d: pointer to the dog struct
 * @name: name o the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
