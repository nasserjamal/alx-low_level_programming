#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: Describes attributes of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
