#include <stdio.h>

void my_start_up(void) __attribute__((constructor));

/**
 * my_start_up - Short description.
 *
 * Return: Always.
 */
void my_start_up(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

