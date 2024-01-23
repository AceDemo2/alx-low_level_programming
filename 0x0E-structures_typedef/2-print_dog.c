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

	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : nil);
	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", nil);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : nil);
}
