#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm
 *
 * @array: pointer to array to be sorted
 * @size: size of array to be sorted
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int ptr, tmp, i, j;

	for (int i = 0; i < size - 1; i++)
	{
		ptr = array[i];

		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < ptr)
			{
				ptr = array[j];
			}
		}

		tmp = array[i];
		array[i] = ptr;
		array[j] = tmp;

		print_list(array);
	}
}
