#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * bubble sort algorithm
 *
 * @array: array to sort using algorithm
 * @size: size of the array
 *
 * Return: return void
*/

void bubble_sort(int *array, size_t size)
{
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i] = tmp;

				print_array(array, size);
			}
		}
	}
}
