#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Short description
 * @d: second member.
 * @name: third member.
 * @age: four member.
 * @owner: fifth member.
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

