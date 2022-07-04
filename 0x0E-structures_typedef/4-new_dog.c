#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *storedName;
	char *storedOwner;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
storedName = malloc(sizeof(char) * (strlen(name) + 1));
storedOwner = malloc(sizeof(char) * (strlen(owner) + 1));
	strcpy(storedName, name);
	strcpy(storedOwner, owner);
	newDog->name = storedName;
	newDog->age = age;
	newDog->owner = storedOwner;
	return (newDog);
}
