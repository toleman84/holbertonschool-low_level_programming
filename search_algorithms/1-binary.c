#include "search_algos.h"

/**
 * binary_search - Short description
 * @array: first member
 * @size: second member
 * @value: third member
 *
 * Return: Always
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, mid = 0, l = 0, r = size - 1;

	if (!array || size <= 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = (l + r) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

