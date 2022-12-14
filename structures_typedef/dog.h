#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Short description.
 */

typedef struct dog dog_t;

/**
 * struct dog - Short description
 * @name: name.
 * @owner: owner.
 * @age: age.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
