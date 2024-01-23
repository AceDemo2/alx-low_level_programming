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
	char *nil = "(nil)";
i
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : nil);
	if (d->age >= 0)
		printf("age: %f\n", d->age);
	else
		printf("age: %s\n", nil);
	printf("owner: %s\n", (d->owner != NULL) ? d->owner : nil);
}
