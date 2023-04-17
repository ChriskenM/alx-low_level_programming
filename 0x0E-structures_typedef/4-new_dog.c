#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - function that creates new_dog
 *@name: name of the dog
 *@owner: name of owner
 *@age: age of dog
 *
 *Return: NULL if it fails else struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bull_dog;
	int i, Tname, Towner;

	bull_dog = malloc(sizeof(*bull_dog));

	if (bull_dog == NULL || !(name) || !(owner))
	{
		free(bull_dog);
		return (NULL);
	}
	for (Tname = 0; name[Tname]; Tname++)
		;
	for (Towner = 0; name[Tname]; Tname++)
		;
	bull_dog->name = malloc(Tname + 1);
	bull_dog->owner = malloc(Towner + 1);

	if (!(bull_dog->name) || !(bull_dog->owner))
	{
		free(bull_dog->owner);
		free(bull_dog->name);
		free(bull_dog);
		return (NULL);
	}
	for (i = 0; i < Tname; i++)
		bull_dog->name[i] = name[i];
	bull_dog->name[i] = '\0';

	bull_dog->age = age;

	for (i = 0; i < Towner; i++)
		bull_dog->owner[i] = owner[i];
	bull_dog->owner[i] = '\0';

	return (bull_dog);
}
