#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: address structo to inicializate
 * @name: Dog name
 * @age: Dog Age
 * @owner:  Dog owner
 *
 * Return:
 * On error, return NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
