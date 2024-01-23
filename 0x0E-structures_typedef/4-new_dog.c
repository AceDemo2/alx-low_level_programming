#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *i;

	if (name == NULL || owner == NULL)
		return NULL;

	i = malloc(sizeof(dog_t));
	if (i == NULL)
		return NULL;

	i->name = malloc(strlen(name) + 1);
	i->owner = malloc(strlen(owner) + 1);

	if (i->name == NULL || i->owner == NULL)
	{
		free(i->name);
		free(i->owner);
		free(i);
		return NULL;
	}

	strcpy(i->name, name);
	strcpy(i->owner, owner);
	i->age = age;

	return i;
}

