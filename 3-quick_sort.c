#include "sort.h"

/**
* pivot_index - Divide an array in two and return the pivot
* @array: Array tested
* @start: Start of the array
* @end: End of the array
* @size: Size of the array
* Return: Return the pivot of the array
*/

int pivot_index(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int j;
	int i = start - 1;
	int tmp;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;

			if (i != j)
				print_array(array, size);
		}
	}
	if (i + 1 != end)
	{
	tmp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = tmp;
	print_array(array, size);
	}

	return (i + 1);
}

/**
* quick_sort_lomuto - Sort an array using the quick sort method
* @array: Array sorted
* @start: The start of the array
* @end: End of the array
* @size: Size of the array
*/

void quick_sort_lomuto(int *array, int start, int end, size_t size)
{
	int p;

	if (start < end)
	{
		p = pivot_index(array, start, end, size);
		quick_sort_lomuto(array, start, p - 1, size);
		quick_sort_lomuto(array, p + 1, end, size);
	}
}

/**
* quick_sort - Sort an array using the quick sort method
* @array: array sorted
* @size: size of the array sorted
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_lomuto(array, 0, size - 1, size);
}
