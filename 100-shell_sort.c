#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using shell sort algorithm using knuth sequence
 *
 * @array: array to be sorted
 * @size: size of array to be sorted
 *
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	int outer, inner, value;
	int interval = 0;

	while (interval < size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
			value = array[outer];
			inner = outer;

			while ((inner > interval - 1) && array[inner - interval] >= value)
			{
				array[inner] = array[inner - interval];
				inner = inner - interval
			}

			array[inner] = value;

			print_array(array, size);
		}

		interval = (interval - 1) / 3;

	}
}
