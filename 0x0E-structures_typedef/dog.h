#ifndef DOG_H
#define DOG_H

/**
 *struct dog - the attributes of dog
 *@name: name of the dog
 *@owner: name of the owner
 *@age: age of the dog
 *
 *Description: the struct named dog stores its name, owners
 *name and its age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 *dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

