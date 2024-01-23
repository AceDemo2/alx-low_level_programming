#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *d);
{
	if (d == NULL)
		return;
	else
	{
		printf("Name: %s\n", (my_dog.name == NULL) ? my_dog.name : (nil));
		printf("age: %s\n", (my_dog.age == NULL) ? my_dog.age : (nil));
		printf("owner: %s\n", (my_dog.owner == NULL) ? my_dog.owner : (nil));
	}
}
