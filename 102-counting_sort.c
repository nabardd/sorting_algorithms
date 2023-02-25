#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order
 * using the Counting sort algorithm
 *
 * @array: array of integers
 * @size: size of array of integers
 *
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int j;
	int count[];
	int output[size];

	for (int i = 0; i < size + 1; i++)
	{
		count[i] = 0;
	}

	for (int i = 0; i < size - 1; i++)
	{
		j = array[i];
		count[j] += 1;
	}

	for (int i = 1; i <= k; i++)
	{
		count[i] = count[i] + count[i - 1];
	}

	for (int i = size - 1; i >= 0; i--)
	{
		j = array[i];
		count[j] = count[j] - 1;
		output[count[j]] = input[i];
	}

	return (output);
}
