#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function initializes var
 * @d: variable name
 * @name: name element
 * @age: age element
 * @owner: owner element
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
