#include "search_algos.h"

/**
 * linear_search - Short description
 * @array: first member
 * @size: second member
 * @value: third member
 *
 * Return: Always
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}

