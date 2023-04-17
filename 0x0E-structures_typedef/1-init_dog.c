#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - function that initialize a variable of type struct dog
 *@name: the name of a dog
 *@owner: owner of the dog
 *@age: age of the dog
 *@d: pointer
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
