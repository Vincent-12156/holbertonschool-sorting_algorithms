#include "sort.h"

/**
* selection_sort - Sort an array with the selection sort method
* @array: Array sorted
* @size: size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;

		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
