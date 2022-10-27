#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Short description.
 * @d: first member.
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	if (d == NULL)
	{
		printf("%c", ' ');
	}
}

