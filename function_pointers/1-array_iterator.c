#include "function_pointers.h"

/**
 * array_iterator - Short description.
 * @array: first member.
 * @size: second member.
 * @action: third member.
 *
 * Return: Always 0 (success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

