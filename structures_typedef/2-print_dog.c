#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Short description.
 * @d: first member.
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{

printf("%s\n", d->name);
printf("%s\n", d->owner);
printf("%f\n", d->age);

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	if (d == NULL)
	{
		printf("%c", ' ');
	}
}

