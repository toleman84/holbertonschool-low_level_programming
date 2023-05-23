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

function binary_search(A, n, T) is
    L := 0
    R := n − 1
    while L ≤ R do
        m := floor((L + R) / 2)
        if A[m] < T then
            L := m + 1
        else if A[m] > T then
            R := m − 1
        else:
            return m
    return unsuccessful

Your function must return the index where value is located
You can assume that array will be sorted in ascending order
You can assume that value won’t appear more than once in array
If value is not present in array or if array is NULL, your function must return -1
You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)