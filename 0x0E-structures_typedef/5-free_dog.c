#include "dog.h"

/**
 * free_dog - function that free a dog
 *
 * @d    : Dog to free
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{

	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}

