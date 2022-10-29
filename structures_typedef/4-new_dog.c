#include "dog.h"
#include <string.h>
#include <stdlib.h>

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

doggy = malloc(sizeof(name) * strlen(name) + 1);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

doggy = malloc(sizeof(owner) * strlen(owner) + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = strcpy(doggy->owner, owner);

return (doggy);
}

