#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nil = (nil);
	
	if (d == NULL)
		return;
	else
	{
		printf("Name: %s\n", (d->name == NULL) ? d->name : nil);
		printf("age: %s\n", (d->age == NULL) ? d->age : nil);
		printf("owner: %s\n", (d->owner == NULL) ? d->owner : nil);
	}
}
