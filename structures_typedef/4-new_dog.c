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
	if (name != NULL)
	{
		cpyName = strdup(name);
		if (cpyName == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->name = strcpy(cpyName, name);
	}
	else
	{
		doggy->name = NULL;
	}
	if (owner != NULL)
	{
		cpyOwner = strdup(owner);
		if (cpyOwner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}
		doggy->owner = strcpy(cpyOwner, owner);
	}
	else
	{
		doggy->owner = NULL;
	}
	return (doggy);
}

