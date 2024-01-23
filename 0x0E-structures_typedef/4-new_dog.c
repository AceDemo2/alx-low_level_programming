#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
	struct dog_t *i;

	i = malloc(sizeof(dog_t));
	if (i == NULL)
		return (NULL);
	i->name = strdup(name);
	i->owner = strdup(owner);
	if (i->name == NULL || i->owner == NULL)
	{
		free(i->name);
		free(i->owner);
		free(i);
		return (NULL);
	}
	i->age = age;
	return (i);
}
