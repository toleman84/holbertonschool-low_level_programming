#include "search_algos.h"

/**
 * linear_search - function that searches for a value in a sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in size is the number of elements in array
 * @size: is the number of elements in array
 * @value: is the value to search for your function
 *
 * Return: Always
 */
int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid = 0;
    int i;

    while (low <= high)
    {
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            if (i != low)
            {
                printf("%d", array[i]);
            }
        }
        printf("\n");
        mid = ((low + high) / 2);
        if (array[mid] < value)
        {
            low = mid + 1;
        }
        else if (array[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            return (mid);
        }
    }
    return (-1);
}
