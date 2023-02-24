#include "sort.h"

void swap_ints(int *a, int * b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * lomuto_partition - Sorts a list a list using the lomuto partiton
 *                    scheme
 *
 * @array: Array to be ordered using lomuto partition.
 * @size: size of array to be sorted.
 * @left: index of first element of the array
 * @right: index of last element of the array
 *
 * Return: returns the final partition index (pivot)
*/
int lomuto_partition(int *array, size_t size, int left, int right)
{
    int j, low, pivot, tmp;
    
    pivot = array[right]; /* last element in the array */
    low = left - 1; /* index before first element */

    for (j = left; j <= right; j++)
    {
        if (array[j] <= pivot)
        {
            low += 1;
            tmp = array[low];
            array[low] = array[j];
            array[j] = tmp;

            print_array(array, size);
        }
    }

    tmp = array[low + 1];
    array[low + 1] = array[right];
    array[right] = tmp;
    print_array(array, size);

    return (low + 1);
}

/**
 * lomuto_sort - Sorts an array using recursion and the lomuto_sort
 *               algorithm
 *
 * @array: Array to be sorted
 * @size: size of the array
 * @left: index for first element in the array
 * @right: index for last element in the array
 *
 * Return: void
*/
void lomuto_sort(int *array, size_t size, int left, int right)
{
    int pivot;

    if (right - left > 0)
    {
        pivot = lomuto_partition(array, size, left, right);
        lomuto_sort(array, size, left, pivot - 1);
        lomuto_sort(array, size, pivot - 1, right);
    }
}


/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the quick sort algorithm.
 *
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: void
*/
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    lomuto_sort(array, size, 0, size - 1);
}