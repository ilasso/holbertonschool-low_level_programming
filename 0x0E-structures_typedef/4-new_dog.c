#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
/**
 * new_dog - function that creates a new dog.
 *
 * @name    : Dog name
 * @age     : Dog age
 * @owner   : Dog owner
 * Return:   pointer to a new dog instance
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newdog;
	char *newname;
	char *newowner;
	int lenname;
	int lenowner;
	int i;

	newdog =  malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	/* alloc name*/
	lenname = _strlen(name);
	newname = malloc(sizeof(char) * lenname + 1);

	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	/* alloc owner*/
	lenowner = _strlen(owner);
	newowner = malloc(sizeof(char) * lenowner + 1);

	if (newowner == NULL)
	{
		free(newname);
		free(newdog);
		return (NULL);
	}


	for (i = 0; i <= lenname ; i++)
	{
		newname[i] = name[i];
	}

	for (i = 0; i <= lenowner ; i++)
	{
		newowner[i] = owner[i];
	}

	newdog->name = newname;
	newdog->owner = newowner;
	newdog->age = age;

	return (newdog);
}


/**
 * _strlen   -  returns the length of a string.
 * @s : pointer to char
 * Return:  int
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{

		i++;

	}

	return (i);


}
