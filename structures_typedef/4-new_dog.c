#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Short description
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *cpyName;
	char *cpyOwner;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->age = age;

	cpyName = malloc(sizeof(char) * strlen(name) + 1);
	if (cpyName == NULL)
	{
		free(doggy);
		return (NULL);
	}
	free(doggy);
	doggy->name = strcpy(cpyName, name);

	cpyOwner = malloc(sizeof(char) * strlen(owner) + 1);
	if (cpyOwner == NULL)
	{

		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->owner = strcpy(cpyOwner, owner);
	free(doggy->owner);

	return (doggy);
}

