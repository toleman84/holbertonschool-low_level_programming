#include "dog.h"
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

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = malloc(strlen(name) + 1);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(strlen(owner) + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->age = age;
	free(doggy->name);
	free(doggy->owner);
	free(doggy);

	return (doggy);
}

