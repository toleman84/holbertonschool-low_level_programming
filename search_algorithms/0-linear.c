#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the Linear search
 * @array: pointer to the first element of the array to search in size is the number of elements in array
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

    for (i = 0; i < array[size - 1]; i++)
    {
        if (array[i] == value)
        {
            return(i);
        }
    // Si i < n, vaya al paso 2. De lo contrario, la búsqueda finaliza sin éxito.
        if (i < size)
            continue;
        else
            break;

        printf("Value checked array[0] = [10]");
    }
    return (-1);
}
