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
    int l = 0; // l = low
    int r = size - 1; //r = high
    int m = 0; // mid

    while (l <= r)
    {
        printf("Searching in array: ");
        for (i = l; i <= r; i++)
        {
            if (i != l)
            {
                -printf("%d", array[i]);
            }
        }
        printf("\n");
        m = ((l + r) / 2);
        if (array[m] < value)
        {
            l = m + 1;
        }
        else if (array[m] > value)
        {
            r = m - 1;
        }
        else
        {
            return (m);
        }
    }
    return (-1);
}
