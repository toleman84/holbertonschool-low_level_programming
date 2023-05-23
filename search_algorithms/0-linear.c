#include "search_algos.h"

/**
 * linear_search - searches a value in an array of int using the Linear search
 * @array: pointer to the first element of the array to search in size
 * @size: is the number of elements in array
 * @value: is the value to search for your function
 *
 * Return: Always
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i <= array[size - 1]; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
