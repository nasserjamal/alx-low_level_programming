#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: Describes attributes of the dog
 */
struct  dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
